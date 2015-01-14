
#ifndef __PREFERENCES_H__
#define __PREFERENCES_H__

#include "SDL.h"
#include <string>

/// Current Settings Revision
#define PREF_VERSION "0.6"

/// User Settings File
#define USER_PREF_FILE_NAME "Preferences.ini"
/// Default Settings File
//#define DEF_PREF_NAME "Default.ini"

// The application refers to this in-operation
class App_Settings
{
public:
  ~App_Settings();
  static int MAXLINE;
  //void apply( void );
  //void update( cSettings *Settings );
  void load_default();
  void load();
  void load(char *filename);
  void save(char *filename);
  void save();
  int parse_line( char ** parts, unsigned int count, unsigned int line_num );
  void parse(char *line, int line_num);
  struct 
  {
    Uint8 midi_port=0;
  } vars;

  std::string filepath;
};


#endif