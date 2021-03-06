//
//  DownloadViewController.h


#import <UIKit/UIKit.h>
#import "DownloadDelegate.h"
#import "KSVideoPlayerView.h"
#import "LALTableViewCell.h"

//#import "Constants.h"

@interface DownloadViewController : UIViewController
<UITableViewDelegate,UITableViewDataSource,DownloadDelegate,playerViewDelegate>{
   IBOutlet UITableView *downloadingTable;   
   IBOutlet UITableView *finishedTable;
    IBOutlet UIButton *backbtn;
    IBOutlet UIButton *clearallbtn;
    NSMutableArray *downingList;
    NSMutableArray *finishedList;
    float version;
}

@property (retain, nonatomic) IBOutlet UIView *downBackV;

@property (retain, nonatomic) IBOutlet UILabel *bandwithLab;
@property (retain, nonatomic) IBOutlet UILabel *noLoadsInfo;

@property (retain, nonatomic) IBOutlet UILabel *diskInfoLab;
@property (retain, nonatomic) IBOutlet UIButton *editbtn;
@property(nonatomic,retain)IBOutlet UITableView *downloadingTable;
@property(nonatomic,retain)IBOutlet UITableView *finishedTable;
@property(nonatomic,strong) NSMutableArray *downingList;
@property(nonatomic,strong) NSMutableArray *finishedList;
@property (retain, nonatomic) IBOutlet UIButton *downloadingViewBtn;
@property (retain, nonatomic) IBOutlet UIButton *finieshedViewBtn;
- (IBAction)goDownloadingView:(UIButton *)sender;
- (IBAction)goFinishedView:(UIButton *)sender;
- (void)deleteFinishedFile:(FileModel *)selectFile;
-(void)ReloadDownLoadingTable;

- (IBAction)back:(id)sender;
-(IBAction)enterEdit:(UIButton*)sender;
-(IBAction)clearlist:(UIButton *)sender;
-(void)showFinished;//查看已下载完成的文件视图
-(void)showDowning;//查看正在下载的文件视图
-(void)startFlipAnimation:(NSInteger)type;//播放旋转动画,0从右向左，1从左向右
-(void)updateCellOnMainThread:(FileModel *)fileInfo;//更新主界面的进度条和信息
@end
