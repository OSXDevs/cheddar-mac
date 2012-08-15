//
//  NSTextView+CDMAdditions.h
//  Cheddar for Mac
//
//  Created by Indragie Karunaratne on 2012-08-15.
//  Copyright (c) 2012 Nothing Magical. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface NSTextView (CDMAdditions)
- (NSMenu*)menuForEvent_swizzle:(NSEvent *)event;
@property (nonatomic, assign) BOOL useCustomContextMenu;
@end
