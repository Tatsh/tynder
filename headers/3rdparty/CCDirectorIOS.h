//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCDirector.h"

@interface CCDirectorIOS : CCDirector
{
}

- (struct CGPoint)convertTouchToGL:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)drawScene;
- (void)end;
- (void)getFPSImageData:(char **)arg1 length:(unsigned int *)arg2 contentScale:(float *)arg3;
- (id)init;
- (void)reshapeProjection:(struct CGSize)arg1;
- (void)runWithScene:(id)arg1;
- (void)setProjection:(unsigned int)arg1;
- (void)setView:(id)arg1;
- (void)setViewport;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)startAnimationIfPossible;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
