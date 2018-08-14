//
//  XMGFileTool.h
//  Whdz
//
//  Created by 张文文 on 2018/8/14.
//  Copyright © 2018年 zww. All rights reserved.

//  处理文件缓存

#import <Foundation/Foundation.h>

@interface XMGFileTool : NSObject

/**
 *  获取文件夹尺寸
 *
 *  @param directoryPath 文件夹路径
 *
 *  @return 返回文件夹尺寸
 */
+ (NSInteger)getFileSize:(NSString *)directoryPath;


/**
 *  删除文件夹所有文件
 *
 *  @param directoryPath 文件夹路径
 */
+ (void)removeDirectoryPath:(NSString *)directoryPath;


@end
