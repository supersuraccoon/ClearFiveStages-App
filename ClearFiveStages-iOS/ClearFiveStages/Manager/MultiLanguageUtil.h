typedef enum {
	// common
	STRING_GAMELEVEL_EASY,
	STRING_GAMELEVEL_NORMAL,
	STRING_GAMELEVEL_HARD,
	STRING_CONFIRM_YES,
	STRING_CANCEL_NO,	
	STRING_WARNING,
	STRING_MAINMENU,
	STRING_GAME_HIGHSCORE,
	STRING_RESUME_GAME,
    STRING_SHARE_SCORE,
	// main scene
	STRING_START_GAME,
	STRING_ABOUT_GAME,
	STRING_GAME_TUTORIAL,
	// highscore scene
	STRING_HIGHSCORE_RANK,
	STRING_HIGHSCORE_PLAYERNAME,
	STRING_HIGHSCORE_PLAYDATE,
	STRING_HIGHSCORE_COSTTIME,
	STRING_HIGHSCORE_ACCURACY,
	// alert view
	STRING_ALERT_RESTART_MESSAGE,
	STRING_ALERT_DEAL_MESSAGE,
	STRING_ALERT_NEXT_MESSAGE,
	// gameplay scene
	STRING_TIMER,
	STRING_DEALCARD,
	STRING_GETCARD,
	STRING_NEXTROW,
	STRING_RESTART_GAME,
	STRING_SHOWHINT,
    STRING_CLEARED,
	// levelselect scene
	STRING_CHOOSE_GAMELEVEL,
	STRING_CHOOSE_TABLE,
	STRING_GAMELEVEL_EASY_INFO,
	STRING_GAMELEVEL_NORMAL_INFO,
	STRING_GAMELEVEL_HARD_INFO,
	// paigow ruletype
	STRING_PAIGOW_RULETYPE_NONE,
	STRING_PAIGOW_RULETYPE_NORMAL,
	STRING_PAIGOW_RULETYPE_LEFT_FIVE,
	STRING_PAIGOW_RULETYPE_DIVIDE,
	STRING_PAIGOW_RULETYPE_DOUBLE,
	STRING_PAIGOW_RULETYPE_LEFT_SAME,
	STRING_PAIGOW_RULETYPE_FIVE,
	STRING_PAIGOW_RULETYPE_TTS,
	STRING_PAIGOW_RULETYPE_CONTINUE,
	// option layer
	STRING_OPTION_TITLE,
	STRING_CHOOSE_LANGUAGE,
	STRING_MUSIC,
	STRING_SOUND,
	STRING_PLAYERNAME,
	// game win layer
	STRING_GAMEWIN,	
	STRING_GAMELEVEL,
	STRING_RANK_OUT,
	// game lose layer
	STRING_GAMELOSE,
	STRING_GAMELOSE_INFO,
	// email
	STRING_EMAIL_ALERT_TITLE,
	STRING_EMAIL_ALERT_MESSAGE,
	STRING_EMAIL_ALERT_CONFIRM,
	STRING_EMAIL_TITLE,
	STRING_EMAIL_RECIPIENT,
	STRING_EMAIL_CONTENT,
    // social
    STRING_TWITTER_CONTENT,
    STRING_FACEBOOK_CONTENT,
    // help scene
    STRING_TUTORIAL_TITLE_PAGE_0 = 1000,
    STRING_TUTORIAL_TITLE_PAGE_1 = 1001,
    STRING_TUTORIAL_TITLE_PAGE_2 = 1002,
    STRING_TUTORIAL_TITLE_PAGE_3 = 1003,
    STRING_TUTORIAL_TITLE_PAGE_4 = 1004,
    STRING_TUTORIAL_TITLE_PAGE_5 = 1005,
    STRING_TUTORIAL_TITLE_PAGE_6 = 1006,
    STRING_TUTORIAL_TITLE_PAGE_7 = 1007,
    STRING_TUTORIAL_TITLE_PAGE_8 = 1008,
    STRING_TUTORIAL_TITLE_PAGE_9 = 1009,
    STRING_TUTORIAL_TITLE_PAGE_10 = 1010,
    STRING_TUTORIAL_TITLE_PAGE_11 = 1011,
    STRING_TUTORIAL_TITLE_PAGE_12 = 1012,
    STRING_TUTORIAL_TITLE_PAGE_13 = 1013,
    STRING_TUTORIAL_TITLE_PAGE_14 = 1014,
    STRING_TUTORIAL_TITLE_PAGE_15 = 1015,
    
    STRING_TUTORIAL_SUBTITLE_PAGE_0 = 2000,
    STRING_TUTORIAL_SUBTITLE_PAGE_1 = 2001,
    STRING_TUTORIAL_SUBTITLE_PAGE_2 = 2002,
    STRING_TUTORIAL_SUBTITLE_PAGE_3 = 2003,
    STRING_TUTORIAL_SUBTITLE_PAGE_4 = 2004,
    STRING_TUTORIAL_SUBTITLE_PAGE_5 = 2005,
    STRING_TUTORIAL_SUBTITLE_PAGE_6 = 2006,
    STRING_TUTORIAL_SUBTITLE_PAGE_7 = 2007,
    STRING_TUTORIAL_SUBTITLE_PAGE_8 = 2008,
    STRING_TUTORIAL_SUBTITLE_PAGE_9 = 2009,
    STRING_TUTORIAL_SUBTITLE_PAGE_10 = 2010,
    STRING_TUTORIAL_SUBTITLE_PAGE_11 = 2011,
    STRING_TUTORIAL_SUBTITLE_PAGE_12 = 2012,
    STRING_TUTORIAL_SUBTITLE_PAGE_13 = 2013,
    STRING_TUTORIAL_SUBTITLE_PAGE_14 = 2014,
    STRING_TUTORIAL_SUBTITLE_PAGE_15 = 2015,

    STRING_TUTORIAL_INFO_PAGE_0 = 3000,
    STRING_TUTORIAL_INFO_PAGE_1 = 3001,
    STRING_TUTORIAL_INFO_PAGE_2 = 3002,
    STRING_TUTORIAL_INFO_PAGE_3 = 3003,
    STRING_TUTORIAL_INFO_PAGE_4 = 3004,
    STRING_TUTORIAL_INFO_PAGE_5 = 3005,
    STRING_TUTORIAL_INFO_PAGE_6 = 3006,
    STRING_TUTORIAL_INFO_PAGE_7 = 3007,
    STRING_TUTORIAL_INFO_PAGE_8 = 3008,
    STRING_TUTORIAL_INFO_PAGE_9 = 3009,
    STRING_TUTORIAL_INFO_PAGE_10 = 3010,
    STRING_TUTORIAL_INFO_PAGE_11 = 3011,
    STRING_TUTORIAL_INFO_PAGE_12 = 3012,
    STRING_TUTORIAL_INFO_PAGE_13 = 3013,
    STRING_TUTORIAL_INFO_PAGE_14 = 3014,
    STRING_TUTORIAL_INFO_PAGE_15 = 3015,
} STRING_KEY;
	
@interface MultiLanguageUtil: NSObject {}

+(NSString *) getI18NResourceNameFrom:(NSString *)resourceName;
+(NSString *) getTimeStringFromSecond:(int)sec;
+(NSString *) getLocalizatedStringForKey:(STRING_KEY)key;

@end
