//
//  ColorUtils.h
//
//  Version 1.1.2
//
//  Created by Nick Lockwood on 19/11/2011.
//  Copyright (c) 2011 Charcoal Design
//
//  Distributed under the permissive zlib License
//  Get the latest version from here:
//
//  https://github.com/nicklockwood/ColorUtils
//
//  This software is provided 'as-is', without any express or implied
//  warranty.  In no event will the authors be held liable for any damages
//  arising from the use of this software.
//
//  Permission is granted to anyone to use this software for any purpose,
//  including commercial applications, and to alter it and redistribute it
//  freely, subject to the following restrictions:
//
//  1. The origin of this software must not be misrepresented; you must not
//  claim that you wrote the original software. If you use this software
//  in a product, an acknowledgment in the product documentation would be
//  appreciated but is not required.
//
//  2. Altered source versions must be plainly marked as such, and must not be
//  misrepresented as being the original software.
//
//  3. This notice may not be removed or altered from any source distribution.
//


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wauto-import"
#pragma GCC diagnostic ignored "-Wobjc-missing-property-synthesis"


#if TARGET_OS_IPHONE
@interface UIColor (ColorUtils)
#elif TARGET_OS_MAC && !TARGET_OS_IPHONE
@interface NSColor (ColorUtils)
#endif


@property (nonatomic, readonly) CGFloat red;
@property (nonatomic, readonly) CGFloat green;
@property (nonatomic, readonly) CGFloat blue;
@property (nonatomic, readonly) CGFloat alpha;

#if TARGET_OS_IPHONE
+ (void)registerColor:(UIColor *)color forName:(NSString *)name;
#elif TARGET_OS_MAC && !TARGET_OS_IPHONE
+ (void)registerColor:(NSColor *)color forName:(NSString *)name;
#endif

+ (instancetype)colorWithString:(NSString *)string;
+ (instancetype)colorWithRGBValue:(uint32_t)rgb;
+ (instancetype)colorWithRGBAValue:(uint32_t)rgba;
- (instancetype)initWithString:(NSString *)string;
- (instancetype)initWithRGBValue:(uint32_t)rgb;
- (instancetype)initWithRGBAValue:(uint32_t)rgba;

- (uint32_t)RGBValue;
- (uint32_t)RGBAValue;
- (NSString *)stringValue;

- (BOOL)isMonochromeOrRGB;
- (BOOL)isEquivalent:(id)object;

#if TARGET_OS_IPHONE
- (BOOL)isEquivalentToColor:(UIColor *)color;
#elif TARGET_OS_MAC && !TARGET_OS_IPHONE
- (BOOL)isEquivalentToColor:(NSColor *)color;
#endif

- (instancetype)colorWithBrightness:(CGFloat)brightness;
#if TARGET_OS_IPHONE
- (instancetype)colorBlendedWithColor:(UIColor *)color factor:(CGFloat)factor;
#elif TARGET_OS_MAC && !TARGET_OS_IPHONE
- (instancetype)colorBlendedWithColor:(NSColor *)color factor:(CGFloat)factor;
#endif

@end


#pragma GCC diagnostic pop
