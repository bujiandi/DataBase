//
//  DataBase.h
//  DataBase
//
//  Copyright 2018 LiZhaoLi
//  Licensed under Apache License 2.0
//
//  https://github.com/bujiandi/DataBase
//

#include <TargetConditionals.h>

#if TARGET_OS_IPHONE || TARGET_OS_TV || TARGET_IPHONE_SIMULATOR
	#import <UIKit/UIKit.h>
#else
    #import <Cocoa/Cocoa.h>
#endif

//! Project version number for DataBase.
FOUNDATION_EXPORT double DataBaseVersionNumber;

//! Project version string for DataBase.
FOUNDATION_EXPORT const unsigned char DataBaseVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <DataBase/PublicHeader.h>


