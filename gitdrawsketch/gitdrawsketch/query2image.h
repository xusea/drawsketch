//
//  query2image.h
//  testDrawSketch
//
//  Created by xusea on 16/6/14.
//  Copyright © 2016年 xusea. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Quartz/Quartz.h>
#import "imageitem.h"
#import "scrollimagedelegate.h"
#import "drawSketch.h"
#import "thumbnailView.h"
@interface query2image : NSObject<NSURLSessionDownloadDelegate>
{
    NSString * query;
    NSMutableArray * selist;
    NSMutableArray * imageitemlist;
    NSMutableDictionary * url2file;
    scrollimagedelegate * imagesource;
    IKImageBrowserView * ikipoint;
    NSImage * thumbnail;
    drawSketch * dsketch;
    thumbnailView * thumbnailViewpoint;
    int selectflag;
    NSString * dir;
    int bestimageind;
    int selectedimageind;
}
@property NSString * query;
@property NSMutableArray *selist;
@property NSMutableArray * imageitemlist;
@property NSMutableDictionary * url2file;
@property scrollimagedelegate * imagesource;
@property IKImageBrowserView * ikipoint;
@property drawSketch * dsketch;
@property thumbnailView * thumbnailViewpoint;
@property int selectflag;
@property NSString * dir;
@property int bestimageind;
@property int selectedimageind;

-(void)getimages;
-(void)downloadfile:(NSString *)url file:(NSString *)file;
-(NSString *)getDocumentsPath;
-(void)showResponseCode:(NSURLResponse *)response ;
-(NSString *)getrandstr;
-(int)getimagesfromseresult:(NSURL *)filename sesource:(NSString*) se;
-(imageitem *)getdownimageitem;
-(void)statimagescore:(imageitem *)it;
-(imageitem *)getbestimageitem;
-(imageitem *)getselectedimageitem;
@end
