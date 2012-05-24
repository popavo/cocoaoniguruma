//
//  NSObject+ARCCompat.h
//  TestCLI
//
//  Created by Brian Garrett on 5/24/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

#if __has_feature(objc_arc)

#define copyWithZone _ARCCopyWithZone
#define mutableCopyWithZone _ARCMutableCopyWithZone
#define zone _ARCZone
#define retain _ARCRetain
#define release _ARCRelease
#define autorelease _ARCAutorelease
#define retainCount _ARCRetainCount

#endif

@interface NSObject (ARCCompat)

-(NSZone *)_ARCZone;
-(id)_ARCRetain;
-(oneway void)_ARCRelease;
-(id)_ARCAutorelease;
-(NSUInteger)_ARCRetainCount;

-(id)_ARCCopyWithZone:(NSZone *)zone;
-(id)_ARCMutableCopyWithZone:(NSZone *)zone;

@end
