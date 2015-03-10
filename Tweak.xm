@interface TNDRUserCardCellManager
- (void)tossCell:(id)arg1 inDirection:(int)arg2 withMethod:(id)arg3 dismissCard:(BOOL)arg4;
@end

%hook TNDRUserCardCellManager
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 {
    id r = %orig;

    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
        [NSThread sleepForTimeInterval:2.0f]; // seconds

        dispatch_async(dispatch_get_main_queue(), ^(void) {
            [self tossCell:r inDirection:1 withMethod:@"SWIPE" dismissCard:NO]; // Does not show LIKE sprite on cell, does it work?
        });
    });

    return r;
}
%end
