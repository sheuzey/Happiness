//
//  FaceView.h
//  Happiness
//
//  Created by Stephen Heuzey on 9/19/12.
//  Copyright (c) 2012 Stephen Heuzey. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FaceView;

@protocol FaceViewDataSource
- (float)smileForFaceView:(FaceView *)sender;
@end

@interface FaceView : UIView

@property (nonatomic) CGFloat scale;

- (void)pinch:(UIPinchGestureRecognizer *)gesture;

@property (nonatomic, weak) IBOutlet id<FaceViewDataSource> dataSource;
@end
