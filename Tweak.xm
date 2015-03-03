@interface TNDRRecommendationViewController : UIViewController
- (void)likeSwiped;
- (void)likeUserForTopCard;
- (void)finishSwipingInDirection:(int)arg1 withVelocity:(struct CGPoint)arg2;
@end

%hook TNDRRecommendationViewController
- (void)controllerDidChangeContent:(id)arg1 {
    %orig;

    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
        [NSThread sleepForTimeInterval:2.0f]; // seconds

        dispatch_async(dispatch_get_main_queue(), ^(void) {
            // [self likeUserForTopCard]; // works but bypasses Ember and we do not want that ;)
            [self finishSwipingInDirection:1 withVelocity:CGPointMake(0.0f, -204.0f)];
        });
    });
}
/*- (void)presentNewMatch:(id)arg1 {
    %log;
    %orig;
}*/
%end
