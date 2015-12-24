
#import "WMFHomeSectionController.h"

@class MWKSite, MWKSavedPageList;

NS_ASSUME_NONNULL_BEGIN

static NSString* const WMFRandomSectionIdentifier = @"WMFRandomSectionIdentifier";

@interface WMFRandomSectionController : NSObject
    <WMFArticleHomeSectionController, WMFFetchingHomeSectionController>

- (instancetype)initWithSite:(MWKSite*)site savedPageList:(MWKSavedPageList*)savedPageList;

@property (nonatomic, strong, readonly) MWKSite* searchSite;

@end

NS_ASSUME_NONNULL_END