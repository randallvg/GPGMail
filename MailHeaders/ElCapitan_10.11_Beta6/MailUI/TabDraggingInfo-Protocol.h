/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSImage, NSWindow;

@protocol TabDraggingInfo <NSObject>
@property(retain, nonatomic) id <TabBarViewItem> draggingItem;
@property(retain, nonatomic) id draggingSource;
@property(retain, nonatomic) NSImage *draggedImage;
@property(nonatomic) struct CGPoint draggingLocation;
@property(nonatomic) unsigned long long draggingSourceOperationMask;
@property(retain, nonatomic) NSWindow *draggingDestinationWindow;
@end
