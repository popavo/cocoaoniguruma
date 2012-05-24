//
//  NSObject+ARCCompat.m
//  TestCLI
//
//  Created by Brian Garrett on 5/24/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "NSObject+ARCCompat.h"

@implementation NSObject (ARCCompat)

-(NSZone *)_ARCZone
{
	return nil;
}
-(id)_ARCRetain
{
	return self;
}
-(oneway void)_ARCRelease
{
	
}
-(id)_ARCAutorelease
{
	return self;
}
-(NSUInteger)_ARCRetainCount
{
	return 1;
}

-(id)_ARCCopyWithZone:(NSZone *)zone
{
	return [self copy];
}
-(id)_ARCMutableCopyWithZone:(NSZone *)zone
{
	return [self mutableCopy];
}


@end
