/**
 * \file
 * \brief Helper Routine for Point Handling, JPEG-Export, CSV-Export
 *
 * Copyright (C) 2019, SICK AG, Waldkirch
 * Copyright (C) 2019, Ing.-Buero Dr. Michael Lehning, Hildesheim
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of Osnabr�ck University nor the names of its
 *       contributors may be used to endorse or promote products derived from
 *       this software without specific prior written permission.
 *     * Neither the name of SICK AG nor the names of its
 *       contributors may be used to endorse or promote products derived from
 *       this software without specific prior written permission
 *     * Neither the name of Ing.-Buero Dr. Michael Lehning nor the names of its
 *       contributors may be used to endorse or promote products derived from
 *       this software without specific prior written permission
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 *      Authors:
 *	      Markus Moesner, SICK AG <t.b.d>
 *         Michael Lehning <michael.lehning@lehning.de>
 *
 */

#pragma warning(disable : 4996)
#pragma warning(disable : 4267)

#include "MainHelper.h"
#include <cstring>
#include <string>
#include "toojpeg.h"

#ifndef _USE_MATH_DEFINES
#define _USE_MATH_DEFINES
#endif

#include <math.h>

using namespace std;
// using namespace ssbl;
// using namespace DevTiM5xxSkeleton;

// Ok, thats for the jpeg lib - don't care
FILE *foutJpg;
void jpegOutputCallback(unsigned char oneByte) {
  fwrite(&oneByte, 1, 1, foutJpg);
}

bool DataExporter::writeJpeg(std::vector<Point> *pointVec) {
  bool ret = true;
  int w = pointVec->size();
  int h = 1;

  int numShots = w * h;

  //	float *ptr = (float *)cloudDataPtr;

  int xic = 400;
  int yic = 400;
  int w2i = 400;
  int h2i = 400;
  int hi = h2i * 2 + 1;
  int wi = w2i * 2 + 1;
  int pixNum = hi * wi;
  int numColorChannel = 3;
  int numDataBytes = numColorChannel * hi * wi;
  unsigned char *pixel = (unsigned char *)malloc(numDataBytes);
  memset(pixel, 0, numDataBytes);
  double scaleFac = 50.0;

  double minX = round(-w2i / scaleFac);
  double maxX = round(w2i / scaleFac);
  double minY = round(-h2i / scaleFac);
  double maxY = round(h2i / scaleFac);

  for (double x = minX; x <= maxX; x += 1.0) {
    unsigned char ucColor = 0x00;
    int xipos = (int)(x * scaleFac + xic);
    if (xipos < 0) {
      continue;
    }
    if (xipos >= wi) {
      continue;
    }
    // Draw vertical line
    if (fabs(x) < 1E-6) {
      ucColor = 0xA0;
    } else {
      ucColor = 0x40;
    }
    for (int i = 0; i < hi; i++) {
      int pixAdr = numColorChannel * (i * wi + xipos);
      pixel[pixAdr] = ucColor;
      pixel[pixAdr + 1] = ucColor;
      pixel[pixAdr + 2] = ucColor;
    }
  }

  for (double y = minY; y <= maxY; y += 1.0) {
    unsigned char ucColor = 0x00;
    int yipos = (int)(-y * scaleFac + yic);
    if (yipos < 0) {
      continue;
    }
    if (yipos >= hi) {
      continue;
    }
    if (fabs(y) < 1E-6) {
      ucColor = 0xA0;
    } else {
      ucColor = 0x40;
    }
    for (int i = 0; i < wi; i++) {
      int pixAdr = numColorChannel * (yipos * wi + i);
      pixel[pixAdr] = ucColor;
      pixel[pixAdr + 1] = ucColor;
      pixel[pixAdr + 2] = ucColor;
    }
  }

  for (int i = 0; i < numShots; i++) {
    double x, y, z, intensity;
    x = (*pointVec)[i].X();
    y = (*pointVec)[i].Y();
    z = (*pointVec)[i].Z();
    intensity = (*pointVec)[i].Intensity();
    int xi = (int)((x * scaleFac) + xic);
    int yi = (int)((-y * scaleFac) + yic);
    if ((xi >= 0) && (xi < wi)) {
      if ((yi >= 0) && (xi < hi)) {
        int pixAdr = numColorChannel * (yi * wi + xi);
        int layer = i / w;
        unsigned char color[3] = {0x00};
        switch (layer) {
          case 0:
            color[0] = 0xFF;
            break;
          case 1:
            color[1] = 0xFF;
            break;
          case 2:
            color[2] = 0xFF;
            break;
          case 3:
            color[0] = 0xFF;
            color[1] = 0xFF;
            break;
        }

        for (int kk = 0; kk < 3; kk++) {
          pixel[pixAdr + kk] = color[kk];
        }
      }
    }
  }

  static int jpgCnt = 0;
  // foutJpg = fopen((to_string(jpgCnt++) + ".jpg").c_str(), "wb");
  foutJpg = fopen("scan.jpg", "wb");
  if (foutJpg != NULL) {
    TooJpeg::writeJpeg(jpegOutputCallback, pixel, wi, hi, true, 99);
    fclose(foutJpg);
  }
  free(pixel);
  return (ret);
}

bool DataExporter::writeCSV(std::vector<Point> *pointVec) {
  bool ret = true;
  // Write CSV-File
  char csvFileNameTmp[255];
  strcpy(csvFileNameTmp, "scan.csv_tmp");
  FILE *foutCsv = fopen(csvFileNameTmp, "w");
  if (foutCsv) {
    // ZIEL:
    // fprintf(foutCsv,"timestamp;range;elevation;azimuth;x;y;z;intensity\n");
    fprintf(foutCsv,
            "timestamp_sec;timestamp_nanosec;range;azimuth_deg;elevation_deg;x;"
            "y;z;intensity\n");
    int w = pointVec->size();
    int h = 1;

    int numShots = w * h;

    long timestamp_sec = 0;
    long timestamp_nanosec = 0;
    for (int i = 0; i < numShots; i++) {
      double x, y, z, intensity;
      x = (*pointVec)[i].X();
      y = (*pointVec)[i].Y();
      z = (*pointVec)[i].Z();
      float range_xy = (float)sqrt(x * x + y * y);
      float range_xyz = (float)sqrt(x * x + y * y + z * z);
      float elevation = (float)atan2(z, range_xy);
      float azimuth = (float)atan2(y, x);
      float elevationDeg = (float)(elevation * 180.0 / M_PI);
      float azimuthDeg = (float)(azimuth * 180.0 / M_PI);

      intensity = (*pointVec)[i].Intensity();

      fprintf(foutCsv,
              "%12ld;%12ld;%8.3lf;%8.3lf;%8.3lf;%8.3f;%8.3f;%8.3f;%8.0f\n",
              timestamp_sec, timestamp_nanosec, range_xyz, azimuthDeg,
              elevationDeg, x, y, z, intensity);
    }
    fclose(foutCsv);
#ifdef linux
    rename(csvFileNameTmp, "scan.csv");
#else
    _unlink("scan.csv");
    rename(csvFileNameTmp, "scan.csv");
#endif
  } else {
    printf("PANIC: Can not open %s for writing.\n", csvFileNameTmp);
  }

  return (ret);
}
