#ifndef PARAMHANDLE_H
#define PARAMHANDLE_H

#include <vector>

/*
   The management of the parameters is based on the concepts of the parameter
   management of ROS. However, there is no central parameter server here.Rather,
   the parameters are managed in a std::map as string lists. For the original
   implementation at ROS please refer to http://wiki.ros.org/ .
*/
class ParamHandle {
 public:
  /** \brief Set a string value on the parameter singleton.
   *
   * \param key The key to be used in the parameter singleton's dictionary
   * \param s The value to be inserted.
   * \throws InvalidNameException If the parameter key begins with a tilde, or
   * is an otherwise invalid graph resource name
   */
  void setParam(const std::string& key, const std::string& s) const;
  /** \brief Set a string value on the parameter singleton.
   *
   * \param key The key to be used in the parameter singleton's dictionary
   * \param s The value to be inserted.
   * \throws InvalidNameException If the parameter key begins with a tilde, or
   * is an otherwise invalid graph resource name
   */
  void setParam(const std::string& key, const char* s) const;
  /** \brief Set a double value on the parameter singleton.
   *
   * \param key The key to be used in the parameter singleton's dictionary
   * \param d The value to be inserted.
   * \throws InvalidNameException If the parameter key begins with a tilde, or
   * is an otherwise invalid graph resource name
   */
  void setParam(const std::string& key, double d) const;
  /** \brief Set an integer value on the parameter singleton.
   *
   * \param key The key to be used in the parameter singleton's dictionary
   * \param i The value to be inserted.
   * \throws InvalidNameException If the parameter key begins with a tilde, or
   * is an otherwise invalid graph resource name
   */
  void setParam(const std::string& key, int i) const;
  /** \brief Set a boolean value on the parameter singleton.
   *
   * \param key The key to be used in the parameter singleton's dictionary
   * \param b The value to be inserted.
   * \throws InvalidNameException If the parameter key begins with a tilde, or
   * is an otherwise invalid graph resource name
   */
  void setParam(const std::string& key, bool b) const;

  /** \brief Set a string vector value on the parameter singleton.
   *
   * \param key The key to be used in the parameter singleton's dictionary
   * \param vec The value to be inserted.
   * \throws InvalidNameException If the parameter key begins with a tilde, or
   * is an otherwise invalid graph resource name
   */
  void setParam(const std::string& key,
                const std::vector<std::string>& vec) const;
  /** \brief Set a double vector value on the parameter singleton.
   *
   * \param key The key to be used in the parameter singleton's dictionary
   * \param vec The value to be inserted.
   * \throws InvalidNameException If the parameter key begins with a tilde, or
   * is an otherwise invalid graph resource name
   */
  void setParam(const std::string& key, const std::vector<double>& vec) const;
  /** \brief Set a float vector value on the parameter singleton.
   *
   * \param key The key to be used in the parameter singleton's dictionary
   * \param vec The value to be inserted.
   * \throws InvalidNameException If the parameter key begins with a tilde, or
   * is an otherwise invalid graph resource name
   */
  void setParam(const std::string& key, const std::vector<float>& vec) const;
  /** \brief Set a int vector value on the parameter singleton.
   *
   * \param key The key to be used in the parameter singleton's dictionary
   * \param vec The value to be inserted.
   * \throws InvalidNameException If the parameter key begins with a tilde, or
   * is an otherwise invalid graph resource name
   */
  void setParam(const std::string& key, const std::vector<int>& vec) const;
  /** \brief Set a bool vector value on the parameter singleton.
   *
   * \param key The key to be used in the parameter singleton's dictionary
   * \param vec The value to be inserted.
   * \throws InvalidNameException If the parameter key begins with a tilde, or
   * is an otherwise invalid graph resource name
   */
  void setParam(const std::string& key, const std::vector<bool>& vec) const;

  /** \brief Set a string vector value on the parameter singleton.
   *
   * \param key The key to be used in the parameter singleton's dictionary
   * \param map The value to be inserted.
   * \throws InvalidNameException If the parameter key begins with a tilde, or
   * is an otherwise invalid graph resource name
   */
  void setParam(const std::string& key,
                const std::map<std::string, std::string>& map) const;
  /** \brief Set a double vector value on the parameter singleton.
   *
   * \param key The key to be used in the parameter singleton's dictionary
   * \param map The value to be inserted.
   * \throws InvalidNameException If the parameter key begins with a tilde, or
   * is an otherwise invalid graph resource name
   */
  void setParam(const std::string& key,
                const std::map<std::string, double>& map) const;
  /** \brief Set a float vector value on the parameter singleton.
   *
   * \param key The key to be used in the parameter singleton's dictionary
   * \param map The value to be inserted.
   * \throws InvalidNameException If the parameter key begins with a tilde, or
   * is an otherwise invalid graph resource name
   */
  void setParam(const std::string& key,
                const std::map<std::string, float>& map) const;
  /** \brief Set a int vector value on the parameter singleton.
   *
   * \param key The key to be used in the parameter singleton's dictionary
   * \param map The value to be inserted.
   * \throws InvalidNameException If the parameter key begins with a tilde, or
   * is an otherwise invalid graph resource name
   */
  void setParam(const std::string& key,
                const std::map<std::string, int>& map) const;
  /** \brief Set a bool vector value on the parameter singleton.
   *
   * \param key The key to be used in the parameter singleton's dictionary
   * \param map The value to be inserted.
   * \throws InvalidNameException If the parameter key begins with a tilde, or
   * is an otherwise invalid graph resource name
   */
  void setParam(const std::string& key,
                const std::map<std::string, bool>& map) const;

  /** \brief Get a string value from the parameter singleton.
   *
   * \param key The key to be used in the parameter singleton's dictionary
   * \param[out] s Storage for the retrieved value.
   *
   * \return true if the parameter value was retrieved, false otherwise
   * \throws InvalidNameException If the parameter key begins with a tilde, or
   * is an otherwise invalid graph resource name
   */
  bool getParam(const std::string& key, std::string& s) const;
  /** \brief Get a double value from the parameter singleton.
   *
   * If you want to provide a default value in case the key does not exist use
   * param().
   *
   * \param key The key to be used in the parameter singleton's dictionary
   * \param[out] d Storage for the retrieved value.
   *
   * \return true if the parameter value was retrieved, false otherwise
   * \throws InvalidNameException If the parameter key begins with a tilde, or
   * is an otherwise invalid graph resource name
   */
  bool getParam(const std::string& key, double& d) const;
  /** \brief Get a float value from the parameter singleton.
   *
   * If you want to provide a default value in case the key does not exist use
   * param().
   *
   * \param key The key to be used in the parameter singleton's dictionary
   * \param[out] f Storage for the retrieved value.
   *
   * \return true if the parameter value was retrieved, false otherwise
   * \throws InvalidNameException If the parameter key begins with a tilde, or
   * is an otherwise invalid graph resource name
   */
  bool getParam(const std::string& key, float& f) const;
  /** \brief Get an integer value from the parameter singleton.
   *
   * If you want to provide a default value in case the key does not exist use
   * param().
   *
   * \param key The key to be used in the parameter singleton's dictionary
   * \param[out] i Storage for the retrieved value.
   *
   * \return true if the parameter value was retrieved, false otherwise
   * \throws InvalidNameException If the parameter key begins with a tilde, or
   * is an otherwise invalid graph resource name
   */
  bool getParam(const std::string& key, int& i) const;
  /** \brief Get a boolean value from the parameter singleton.
   *
   * If you want to provide a default value in case the key does not exist use
   * param().
   *
   * \param key The key to be used in the parameter singleton's dictionary
   * \param[out] b Storage for the retrieved value.
   *
   * \return true if the parameter value was retrieved, false otherwise
   * \throws InvalidNameException If the parameter key begins with a tilde, or
   * is an otherwise invalid graph resource name
   */

  bool getParam(const std::string& key, bool& b) const;

  /** \brief Get a string vector value from the parameter singleton.
   *
   * If you want to provide a default value in case the key does not exist use
   * param().
   *
   * \param key The key to be used in the parameter singleton's dictionary
   * \param[out] vec Storage for the retrieved value.
   *
   * \return true if the parameter value was retrieved, false otherwise
   * \throws InvalidNameException If the parameter key begins with a tilde, or
   * is an otherwise invalid graph resource name
   */
  bool getParam(const std::string& key, std::vector<std::string>& vec) const;
  /** \brief Get a double vector value from the parameter singleton.
   *
   * If you want to provide a default value in case the key does not exist use
   * param().
   *
   * \param key The key to be used in the parameter singleton's dictionary
   * \param[out] vec Storage for the retrieved value.
   *
   * \return true if the parameter value was retrieved, false otherwise
   * \throws InvalidNameException If the parameter key begins with a tilde, or
   * is an otherwise invalid graph resource name
   */
  bool getParam(const std::string& key, std::vector<double>& vec) const;
  /** \brief Get a float vector value from the parameter singleton.
   *
   * If you want to provide a default value in case the key does not exist use
   * param().
   *
   * \param key The key to be used in the parameter singleton's dictionary
   * \param[out] vec Storage for the retrieved value.
   *
   * \return true if the parameter value was retrieved, false otherwise
   * \throws InvalidNameException If the parameter key begins with a tilde, or
   * is an otherwise invalid graph resource name
   */
  bool getParam(const std::string& key, std::vector<float>& vec) const;
  /** \brief Get an int vector value from the parameter singleton.
   *
   * If you want to provide a default value in case the key does not exist use
   * param().
   *
   * \param key The key to be used in the parameter singleton's dictionary
   * \param[out] vec Storage for the retrieved value.
   *
   * \return true if the parameter value was retrieved, false otherwise
   * \throws InvalidNameException If the parameter key begins with a tilde, or
   * is an otherwise invalid graph resource name
   */
  bool getParam(const std::string& key, std::vector<int>& vec) const;
  /** \brief Get a boolean vector value from the parameter singleton.
   *
   * If you want to provide a default value in case the key does not exist use
   * param().
   *
   * \param key The key to be used in the parameter singleton's dictionary
   * \param[out] vec Storage for the retrieved value.
   *
   * \return true if the parameter value was retrieved, false otherwise
   * \throws InvalidNameException If the parameter key begins with a tilde, or
   * is an otherwise invalid graph resource name
   */
  bool getParam(const std::string& key, std::vector<bool>& vec) const;

  /** \brief Get a string map value from the parameter singleton.
   *
   * If you want to provide a default value in case the key does not exist use
   * param().
   *
   * \param key The key to be used in the parameter singleton's dictionary
   * \param[out] map Storage for the retrieved value.
   *
   * \return true if the parameter value was retrieved, false otherwise
   * \throws InvalidNameException If the parameter key begins with a tilde, or
   * is an otherwise invalid graph resource name
   */
  bool getParam(const std::string& key,
                std::map<std::string, std::string>& map) const;
  /** \brief Get a double map value from the parameter singleton.
   *
   * If you want to provide a default value in case the key does not exist use
   * param().
   *
   * \param key The key to be used in the parameter singleton's dictionary
   * \param[out] map Storage for the retrieved value.
   *
   * \return true if the parameter value was retrieved, false otherwise
   * \throws InvalidNameException If the parameter key begins with a tilde, or
   * is an otherwise invalid graph resource name
   */
  bool getParam(const std::string& key,
                std::map<std::string, double>& map) const;
  /** \brief Get a float map value from the parameter singleton.
   *
   * If you want to provide a default value in case the key does not exist use
   * param().
   *
   * \param key The key to be used in the parameter singleton's dictionary
   * \param[out] map Storage for the retrieved value.
   *
   * \return true if the parameter value was retrieved, false otherwise
   * \throws InvalidNameException If the parameter key begins with a tilde, or
   * is an otherwise invalid graph resource name
   */
  bool getParam(const std::string& key,
                std::map<std::string, float>& map) const;
  /** \brief Get an int map value from the parameter singleton.
   *
   * If you want to provide a default value in case the key does not exist use
   * param().
   *
   * \param key The key to be used in the parameter singleton's dictionary
   * \param[out] map Storage for the retrieved value.
   *
   * \return true if the parameter value was retrieved, false otherwise
   * \throws InvalidNameException If the parameter key begins with a tilde, or
   * is an otherwise invalid graph resource name
   */
  bool getParam(const std::string& key, std::map<std::string, int>& map) const;
  /** \brief Get a boolean map value from the parameter singleton.
   *
   * If you want to provide a default value in case the key does not exist use
   * param().
   *
   * \param key The key to be used in the parameter singleton's dictionary
   * \param[out] map Storage for the retrieved value.
   *
   * \return true if the parameter value was retrieved, false otherwise
   * \throws InvalidNameException If the parameter key begins with a tilde, or
   * is an otherwise invalid graph resource name
   */
  bool getParam(const std::string& key, std::map<std::string, bool>& map) const;

  /** \brief Check whether a parameter exists on the parameter singleton.
   *
   * \param key The key to check.
   *
   * \return true if the parameter exists, false otherwise
   * \throws InvalidNameException If the parameter key begins with a tilde, or
   * is an otherwise invalid graph resource name
   */
  bool hasParam(const std::string& key) const;
  /** \brief Search up the tree for a parameter with a given key
   *
   * This function parameter singleton's searchParam feature to search up the
   * tree for a parameter.  For example, if the parameter singleton has a
   * parameter [/a/b] and you're in the namespace [/a/c/d], searching for the
   * parameter "b" will yield [/a/b].  If [/a/c/d/b] existed, that parameter
   * would be returned instead.
   *
   * \param key the parameter to search for
   * \param [out] result the found value (if any)
   *
   * \return true if the parameter was found, false otherwise.
   */
  bool searchParam(const std::string& key, std::string& result) const;
  /** \brief Delete a parameter from the parameter singleton.
   *
   * \param key The key to delete.
   *
   * \return true if the deletion succeeded, false otherwise.
   * \throws InvalidNameException If the parameter key begins with a tilde, or
   * is an otherwise invalid graph resource name
   */
  bool deleteParam(const std::string& key) const;

  /** \brief Get the keys for all the parameters in the parameter singleton.
   * \param keys The keys retrieved.
   * \return true if the query succeeded, false otherwise.
   */
  bool getParamNames(std::vector<std::string>& keys) const;

  /** \brief Assign value from parameter singleton, with default.
   *
   * This method tries to retrieve the indicated parameter value from the
   * parameter singleton, storing the result in param_val.  If the value
   * cannot be retrieved from the server, default_val is used instead.
   *
   * \param param_name The key to be searched on the parameter singleton.
   * \param[out] param_val Storage for the retrieved value.
   * \param default_val Value to use if the server doesn't contain this
   * parameter.
   * \return true if the parameter was retrieved from the server, false
   * otherwise. \throws InvalidNameException If the parameter key begins with a
   * tilde, or is an otherwise invalid graph resource name
   */
  template <typename T>
  bool param(const std::string& param_name, T& param_val,
             const T& default_val) const {
    if (hasParam(param_name)) {
      if (getParam(param_name, param_val)) {
        return true;
      }
    }

    param_val = default_val;
    return false;
  }

  /**
   * \brief Return value from parameter singleton, or default if unavailable.
   *
   * This method tries to retrieve the indicated parameter value from the
   * parameter singleton. If the parameter cannot be retrieved, \c default_val
   * is returned instead.
   *
   * \param param_name The key to be searched on the parameter singleton.
   *
   * \param default_val Value to return if the server doesn't contain this
   * parameter.
   *
   * \return The parameter value retrieved from the parameter singleton, or
   * \c default_val if unavailable.
   *
   * \throws InvalidNameException If the parameter key begins with a tilde,
   * or is an otherwise invalid graph resource name.
   */
  template <typename T>
  T param(const std::string& param_name, const T& default_val) {
    T param_val;
    param(param_name, param_val, default_val);
    return param_val;
  }

 private:
  std::string namespace_;
  std::string unresolved_namespace_;
  bool ok_;
};

#endif  // PARAMHANDLE_H
