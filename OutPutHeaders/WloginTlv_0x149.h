/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WloginTlv.h"

@class NSString;

@interface WloginTlv_0x149 : WloginTlv {
	unsigned short wTipsType;
	NSString* sTipsTitle;
	NSString* sTipsContent;
	NSString* sOtherInfo;
}
@property(copy) NSString* sOtherInfo;
@property(copy) NSString* sTipsContent;
@property(copy) NSString* sTipsTitle;
@property(assign) unsigned short wTipsType;
-(void)dealloc;
-(int)decode:(char**)decode andBuffLen:(int*)len;
@end
