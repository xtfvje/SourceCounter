#ifndef VERSION_H
#define VERSION_H

namespace AutoVersion{
	
	//Date Version Types
	static const char DATE[] = "10";
	static const char MONTH[] = "03";
	static const char YEAR[] = "2009";
	static const double UBUNTU_VERSION_STYLE = 9.03;
	
	//Software Status
	static const char STATUS[] = "Release";
	static const char STATUS_SHORT[] = "r";
	
	//Standard Version Type
	static const long MAJOR = 2;
	static const long MINOR = 2;
	static const long BUILD = 32;
	static const long REVISION = 49;
	
	//Miscellaneous Version Types
	static const long BUILDS_COUNT = 365;
	#define RC_FILEVERSION 2,2,32,49
	#define RC_FILEVERSION_STRING "2, 2, 32, 49\0"
	static const char FULLVERSION_STRING[] = "2.2.32.49";
	
	//These values are to keep track of your versioning state, don't modify them.
	static const long BUILD_HISTORY = 32;
	

}
#endif //VERSION_H
