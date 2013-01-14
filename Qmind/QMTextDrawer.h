/**
 * Tae Won Ha
 * http://qvacua.com
 * https://bitbucket.org/qvacua
 *
 * See LICENSE
 */

#import <Cocoa/Cocoa.h>

@interface QMTextDrawer : NSObject

- (void)drawAttributedString:(NSAttributedString *)attrStr inRect:(NSRect)frame range:(NSRange)range;

@end
