#include <iostream>
#include <string>
// #define M 10
using namespace std;
int main(){
	 int year,moth,day,time;
	 cout<<"请依次输入出生年份、月数、日数、时刻"<<endl;
	 while(scanf("%d%d%d%d",&year,&moth,&day,&time)!=EOF){
	 //	getchar();
	 	float sum=0;
	 	string tiangan,dizhi,shengxiao,sx;
	if(year%10==0)tiangan="庚";
	if(year%10==1)tiangan="辛";
	if(year%10==2)tiangan="壬";
	if(year%10==3)tiangan="葵";
	if(year%10==4)tiangan="甲";
	if(year%10==5)tiangan="乙";
	if(year%10==6)tiangan="丙";
	if(year%10==7)tiangan="丁";
	if(year%10==8)tiangan="戊";
	if(year%10==9)tiangan="己";
	//__________----------------------------
	if(year%12==0){
		dizhi="申";shengxiao="猴";}
	if(year%12==1){
		dizhi="酉";shengxiao="鸡";}
	if(year%12==2){
		dizhi="戌";shengxiao="狗";}
	if(year%12==3){
		dizhi="亥";shengxiao="猪";}
	if(year%12==4){
		dizhi="子";shengxiao="鼠";}
	if(year%12==5){
		dizhi="丑";shengxiao="牛";}
	if(year%12==6){
		dizhi="寅";shengxiao="虎";}
	if(year%12==7){
		dizhi="卯";shengxiao="兔";}
	if(year%12==8){
		dizhi="辰";shengxiao="龙";}
	if(year%12==9){
		dizhi="巳";shengxiao="蛇";}
	if(year%12==10){
		dizhi="午";shengxiao="马";}
	if(year%12==11){
		dizhi="未";shengxiao="羊";}
	//---------------------------------------
	if(year%10==4 && year%12== 4) sum+=12;
	if(year%10==5 && year%12== 5) sum+=9;
	if(year%10==6 && year%12== 6) sum+=6;
	if(year%10==7 && year%12== 7) sum+=7;
	if(year%10==8 && year%12== 8) sum+=12;
	if(year%10==9 && year%12== 9) sum+=5;
	if(year%10==0 && year%12== 10) sum+=9;
	if(year%10==1 && year%12== 11) sum+=8;
	if(year%10==2 && year%12== 0) sum+=7;
	if(year%10==3 && year%12== 1) sum+=8;
	if(year%10==4 && year%12== 2) sum+=15;
	if(year%10==5 && year%12== 3) sum+=9;
	//-
	if(year%10==6 && year%12== 4) sum+=16;
	if(year%10==7 && year%12== 5) sum+=8;
	if(year%10==8 && year%12== 6) sum+=8;
	if(year%10==9 && year%12== 7) sum+=19;
	if(year%10==0 && year%12== 8) sum+=12;
	if(year%10==1 && year%12== 9) sum+=6;
	if(year%10==2 && year%12== 10) sum+=8;
	if(year%10==3 && year%12== 11) sum+=7;
	if(year%10==4 && year%12== 0) sum+=5;
	if(year%10==5 && year%12== 1) sum+=15;
	if(year%10==6 && year%12== 2) sum+=6;
	if(year%10==7 && year%12== 3) sum+=16;
//-
	if(year%10==8 && year%12== 4) sum+=15;
	if(year%10==9 && year%12== 5) sum+=7;
	if(year%10==0 && year%12== 6) sum+=9;
	if(year%10==1 && year%12== 7) sum+=12;
	if(year%10==2 && year%12== 8) sum+=10;
	if(year%10==3 && year%12== 9) sum+=7;
	if(year%10==4 && year%12== 10) sum+=15;
	if(year%10==5 && year%12== 11) sum+=6;
	if(year%10==6 && year%12== 0) sum+=5;
	if(year%10==7 && year%12== 1) sum+=14;
	if(year%10==8 && year%12== 2) sum+=14;
	if(year%10==9 && year%12== 3) sum+=9;
	//-
	if(year%10==0 && year%12== 4) sum+=7;
	if(year%10==1 && year%12== 5) sum+=7;
	if(year%10==2 && year%12== 6) sum+=9;
	if(year%10==3 && year%12== 7) sum+=12;
	if(year%10==4 && year%12== 8) sum+=8;
	if(year%10==5 && year%12== 9) sum+=7;
	if(year%10==6 && year%12== 10) sum+=13;
	if(year%10==7 && year%12== 11) sum+=5;
	if(year%10==8 && year%12== 0) sum+=14;
	if(year%10==9 && year%12== 1) sum+=5;
	if(year%10==0 && year%12== 2) sum+=9;
	if(year%10==1 && year%12== 3) sum+=17;
	//
	if(year%10==2 && year%12== 4) sum+=5;
	if(year%10==3 && year%12== 5) sum+=7;
	if(year%10==4 && year%12== 6) sum+=12;
	if(year%10==5 && year%12== 7) sum+=8;
	if(year%10==6 && year%12== 8) sum+=8;
	if(year%10==7 && year%12== 9) sum+=6;
	if(year%10==8 && year%12== 10) sum+=19;
	if(year%10==9 && year%12== 11) sum+=6;
	if(year%10==0 && year%12== 0) sum+=8;
	if(year%10==1 && year%12== 1) sum+=16;
	if(year%10==2 && year%12== 2) sum+=10;
	if(year%10==3 && year%12== 3) sum+=7;
	//------------------------------------------------------
	if(moth==1)sum+=6;
	if(moth==2)sum+=7;
	if(moth==3)sum+=18;
	if(moth==4)sum+=9;
	if(moth==5)sum+=5;
	if(moth==6)sum+=16;
	if(moth==7)sum+=9;
	if(moth==8)sum+=15;
	if(moth==9)sum+=18;
	if(moth==10)sum+=8;
	if(moth==11)sum+=9;
	if(moth==12)sum+=5;
	//-----------------------------------------------------
	if(day==1)sum+=5;
	if(day==2)sum+=10;
	if(day==3)sum+=8;
	if(day==4)sum+=15;
	if(day==5)sum+=16;
	if(day==6)sum+=15;
	if(day==7)sum+=8;
	if(day==8)sum+=16;
	if(day==9)sum+=8;
	if(day==10)sum+=16;
	if(day==11)sum+=9;
	if(day==12)sum+=9;
	if(day==13)sum+=8;
	if(day==14)sum+=17;
	if(day==15)sum+=10;
	if(day==16)sum+=8;
	if(day==17)sum+=9;
	if(day==18)sum+=18;
	if(day==19)sum+=5;
	if(day==20)sum+=15;
	if(day==21)sum+=10;
	if(day==22)sum+=9;
	if(day==23)sum+=8;
	if(day==24)sum+=9;
	if(day==25)sum+=15;
	if(day==26)sum+=18;
	if(day==27)sum+=7;
	if(day==28)sum+=8;
	if(day==29)sum+=16;
	if(day==30)sum+=6;
	//---------------------------------
	string shike;
	if(time>=100 &&time<300){
		shike="丑";sx="牛";
		sum+=6;
	}
	if(time>=300 &&time<500){
		shike="寅";sx="虎";
		sum+=7;
	}
	if(time>=500 &&time<700){
		shike="卯";sx="兔";
		sum+=10;
	}
	if(time>=700 &&time<900){
		shike="辰";sx="龙";
		sum+=9;
	}
	if(time>=900 &&time<1100){
		shike="巳";sx="蛇";
		sum+=16;
	}
	if(time>=1100 &&time<1300){
		shike="午";sx="马";
		sum+=10;
	}
	if(time>=1300 &&time<1500){
		shike="未";sx="羊";
		sum+=8;
	}
	if(time>=1500 &&time<1700){
		shike="申";sx="猴";
		sum+=8;
	}
	if(time>=1700 &&time<1900){
		shike="酉";sx="鸡";
		sum+=9;
	}
	if(time>=1900 &&time<2100){
		shike="戌";sx="狗";
		sum+=6;
	}
	if(time>=2100 &&time<2300){
		shike="亥";sx="猪";
		sum+=6;
	}
	if((time>=2300 &&time<=2400)||time<100){
		shike="子";sx="鼠";
		sum+=16;
	}
	//--------------------------------------------------
	cout<<"*-------------------------------------------------------------------------*"<<endl;
	cout<<"| 您是"<<tiangan<<dizhi<<"年生，年份属"<<shengxiao<<"。出生时刻是"<<shike<<"时，属"<<sx<<"。"<<endl;
	cout<<"| 你的算命结果如下："<<endl;
	//sum=s;
	//cout<<"out"<<sum<<endl;
	if(sum==21)cout<<"| 二两一 衣食奔波出外手艺之人\n| 2两1：短命非业谓大凶，平生灾难事重重，凶祸频临限逆境，终世困苦事不成 "<<endl;
	if(sum==22)cout<<"| 二两二 幼年劳碌中年清泰之人 \n| 2两2：身寒骨冷苦伶仃，此命推来行乞人，劳劳碌碌无度日，中年打拱过平生 "<<endl;
	if(sum==23)cout<<"| 二两三 先难后易出外救人之命 \n| 2两3：此命推来骨轻轻，求谋做事事难成，妻儿兄弟应难许，别处他乡作散人 "<<endl;
	if(sum==24)cout<<"| 二两四 人智巧多能出家求食之人\n| 2两4：此命推来福禄无，门庭困苦总难荣，六亲骨肉皆无靠，流到他乡作老人 "<<endl;
	if(sum==25)cout<<"| 二两五 身闲心不闲九流艺术之人\n| 2两5：此命推来祖业微，门庭营度似希奇，六亲骨肉如水炭，一世勤劳自把持 "<<endl;
	if(sum==26)cout<<"| 二两六 干办营运先贫后富劳碌之人\n| 2两6：平生一路苦中求，独自营谋事不休，离祖出门宜早计，晚来衣禄自无忧 "<<endl;
	if(sum==27)cout<<"| 二两七 超群出众聪明进贵衣禄之人\n| 2两7：一生做事少商量，难靠祖宗作主张，独马单枪空作去，早年晚岁总无长 "<<endl;
	if(sum==28)cout<<"| 二两八 自卓为人才能近贵之人\n| 2两8：一生作事似飘蓬，祖宗产业在梦中，若不过房并改姓，也当移徒二三通 "<<endl;
	if(sum==29)cout<<"| 二两九 才能客商守权达变智慧之人\n| 2两9：初年运限未曾亨，纵有功名在后成，须过四旬方可上，移居改姓使为良 "<<endl;
	if(sum==30)cout<<"| 三两 衣食有余独自卓立成家之命\n| 3两：劳劳碌碌苦中求，东走西奔何日休，若能终身勤与俭，老来稍可免忧愁 "<<endl;
	if(sum==31)cout<<"| 三两一 先贫后富近贵艺术衣食足用之人\n| 3两1：忙忙碌碌苦中求，何日云开见日头，难得祖基家可立，中年衣食渐无忧 "<<endl;
	if(sum==32)cout<<"| 三两二 性巧过人百事精衣食到老近贵之人\n| 3两2：初年运错事难谋，渐有财源如水流，到的中年衣食旺，那时名利一齐来 "<<endl;
	if(sum==33)cout<<"| 三两三 衣食丰满富贵巧艺术智之人\n| 3两3：早年做事事难成，百计徒劳枉费心，半世自如流水去，后来运到始得金 "<<endl;
	if(sum==34)cout<<"| 三两四 财榖有余主得内助爵禄富贵之人\n| 3两4：此命福气果如何，僧道门中衣禄多，离祖出家方得妙，终朝拜佛念弥陀 "<<endl;
	if(sum==35)cout<<"| 三两五 有福禄先难后易过房入赘近富之人\n| 3两5：生平福量不周全，祖业根基觉少传，营事生涯宜守旧，时来衣食胜从前 "<<endl;
	if(sum==36)cout<<"| 三两六 超群拔类乖巧智慧衣禄厚重之人\n| 3两6：不须劳碌过平生，独自成家福不轻，早有福星常照命，任君行去百般成 "<<endl;
	if(sum==37)cout<<"| 三两七 聪明富贵才能厚重有福寿之人\n| 3两7：此命般般事不成，弟兄少力自孤成，虽然祖业须微有，来的明时去的暗 "<<endl;
	if(sum==38)cout<<"| 三两八 财帛丰厚宜称之人\n| 3两8：一生骨肉最清高，早入学门姓名标，待看年将三十六，蓝衣脱去换红袍 "<<endl;
	if(sum==39)cout<<"| 三两九 利上近贵有福有禄之人 \n| 3两9：此命少年运不通，劳劳做事尽皆空，苦心竭力成家计，到得那时在梦中 "<<endl;
	if(sum==40)cout<<"| 四两 富贵近益生涯鼎盛机关之命\n| 4两：平生衣禄是绵长，件件心中自主张，前面风霜都受过，从来必定享安泰 "<<endl;
	if(sum==41)cout<<"| 四两一 税户近贵专才为人衣禄之人\n| 4两1：此命推来事不同，为人能干异凡庸，中年还有逍遥福，不比前年云未通 "<<endl;
	if(sum==42)cout<<"| 四两二 兵权有职富贵才能之人 \n| 4两2：得宽怀处且宽怀，何用双眉总不开，若使中年命运济，那时名利一齐来 "<<endl;
	if(sum==43)cout<<"| 四两三 财碌厚重白手成家之人\n| 4两3：为人心性最聪明，做事轩昂近贵人，衣禄一生天数定，不须劳碌是丰亨"<<endl;
	if(sum==44)cout<<"| 四两四 好学近贵巧智财禄富厚之人\n| 4两4：来事由天莫苦求，须知福禄胜前途，当年财帛难如意，晚景欣然便不忧"<<endl;
	if(sum==45)cout<<"| 四两五 福禄丰厚极富且贵之人\n| 4两5：福中取贵格求真，明敏才华志自伸，福禄寿全家道吉，桂兰毓秀晚荣臻"<<endl;
	if(sum==46)cout<<"| 四两六 富贵有余福寿双全之命\n| 4两6：东西南北尽皆通，出姓移名更觉隆，衣禄无亏天数定，中年晚景一般同"<<endl;
	if(sum==47)cout<<"| 四两七 高官禄厚学业饱满之人\4| 两7：此命推来旺末年，妻荣子贵自怡然，平生原有滔滔福，可有财源如水流 "<<endl;
	if(sum==48)cout<<"| 四两八 官员财禄厚重之人 \n| 4两8：幼年运道未曾享，苦是蹉跎再不兴，兄弟六亲皆无靠，一身事业晚年成"<<endl;
	if(sum==49)cout<<"| 四两九 性巧精神仓库财禄之命\n| 4两9：此命推来福不轻，自立自成显门庭，从来富贵人亲近，使婢差奴过一生"<<endl;
	if(sum==50)cout<<"| 五两 文武才能钱榖丰盛之人\n| 5两：为利为名终日劳，中年福禄也多遭，老来是有财星照，不比前番目下高"<<endl;
	if(sum==51)cout<<"| 五两一 禄厚官职财禄荣华富贵之命\n| 5两1：一世荣华事事通，不须劳碌自亨通，兄弟叔侄皆如意，家业成时福禄宏"<<endl;
	if(sum==52)cout<<"| 五两二 掌握兵权富贵长寿之人\n| 5两2：一世亨通事事能，不须劳思自然能，宗施欣然心皆好，家业丰亨自称心"<<endl;
	if(sum==53)cout<<"| 五两三 青衣贵人僧道门中近贵之人\n| 5两3：此格推来气象真，兴家发达在其中，一生福禄安排定，却是人间一富翁"<<endl;
	if(sum==54)cout<<"| 五两四 有勇有谋威权富贵财禄之命\n| 5两4：此命推来厚且清，诗书满腹看功成，丰衣足食自然稳，正是人间有福人"<<endl;
	if(sum==55)cout<<"| 五两五 八品官职财禄丰盛之人 \n| 5两5：走马扬鞭争名利，少年做事废筹论，一朝福禄源源至，富贵荣华显六亲"<<endl;
	if(sum==56)cout<<"| 五两六 七品官职长享荣华富贵 \n| 5两6：此格推来礼仪通，一生福禄用无穷，甜酸苦辣皆尝过，财源滚滚稳且丰"<<endl;
	if(sum==57)cout<<"| 五两七 六品官职文章压众精通之人\n| 5两7：福禄盈盈万事全，一生荣耀显双亲，名扬威震人钦敬，处世逍遥似遇春"<<endl;
	if(sum==58)cout<<"| 五两八 官禄旺相才能性直富贵之人\n| 5两8：平生福禄自然来，名利兼全福禄偕，雁塔提名为贵客，紫袍金带走金鞋 "<<endl;
	if(sum==59)cout<<"| 五两九 五品官职财禄厚重之人 \n| 5两9：细推此格妙且清，必定才高礼仪通，甲第之中应有分，扬鞭走马显威荣"<<endl;
	if(sum==60)cout<<"| 六两 四品官职荣华福寿财禄之人\n| 6两：一朝金榜快提名，显祖荣宗立大功，衣食定然原欲足，田园财帛更丰盈"<<endl;
	if(sum==61)cout<<"| 六两一 法身官掌风雷权柄之人\n| 6两1：不做朝中金榜客，定为世上一财翁，聪明天赋经书熟，名显高克自是荣"<<endl;
	if(sum==62)cout<<"| 六两二 三品官职有权柄之人 \n| 6两2：此名生来福不穷，读书必定显亲荣，紫衣金带为卿相，富贵荣华皆可同"<<endl;
	if(sum==63)cout<<"| 六两三 指挥太守万户封侯之命\n| 6两3：命主为官福禄长，得来富贵定非常，名题金塔传金榜，定中高科天下扬"<<endl;
	if(sum==64)cout<<"| 六两四 二品官职尚书郎之命\n| 6两4：此格权威不可当，紫袍金带坐高堂，荣华富贵谁能及，积玉堆金满储仓"<<endl;
	if(sum==65)cout<<"| 六两五 掌楬权威极大齐福禄之人\n| 6两5：细推此命福不轻，安国安邦极品人，文绣雕梁政富贵，威声照耀四方闻"<<endl;
	if(sum==66)cout<<"| 六两六 公侯驸马丕相之命\n| 6两6：此格人间一福人，堆金积玉满堂春，从来富贵由天定，正笏垂绅谒圣君"<<endl;
	if(sum==67)cout<<"| 六两七 英名冠世万国来朝之人\n| 6两7：此名生来福自宏，田园家业最高隆，平生衣禄丰盈足，一世荣华万事通"<<endl;
	if(sum==68)cout<<"| 六两八 温和富贵繁荣极吉之命 \n| 6两8：富贵由天莫苦求，万金家计不须谋，十年不比前番事，祖业根基水上舟"<<endl;
	if(sum==69)cout<<"| 六两九 惠收高位功名显达之命\n| 6两9：君是人间衣禄星，一生福贵众人钦，纵然福禄由天定，安享荣华过一生"<<endl;
	if(sum==70)cout<<"| 七两 权力具备极品上流之命\n| 7两： 此命推来福不轻，不须愁虑苦劳心，一生天定衣与禄，富贵荣华过一生"<<endl;
	//else printf("error\n");
	cout<<"*-------------------------------------------------------------------------*"<<endl;
	
 
// 7两1：此名生来大不同，公侯卿相在其中，一生自有逍遥福，富贵荣华极品隆 
// 7两2：此格世界罕有生，十代积善产此人，天上紫微来照命，统治万民乐太平  
        
       
	//-----------------------计算完毕---------------
	//cout<<tiangan<<dizhi<<"   属："<<shengxiao<<endl;
	//cout<<"sum:"<<sum<<endl;

  	}
   	return 0;
}
	//  float sum=0;
	// cout<<"请输入您的出生年份：";
	// cin>>year;
	// cout<<"请输入您的阴历出生月数：";
	// cin>>moth;
	// cout<<"请输入您的阴历出生日数：";
	// cin>>day;
	// cout<<"请输入您的出生时刻（如12:32则输入1232）：";
	// cin>>time;
	 // cout<<(1995%12)<<endl;
	 // cout<<(1996%12)<<endl;
	// char tiangan[M],dizhi[M];
	



	// if(year%60==4){
	// 	cout<<"甲子年生 —————— 一两二钱"<<endl;
	// 	sum+=1.2;
	// }
	// if(year%60==5){
	// 	cout<<"乙丑年生 ——————    九钱"<<endl;
	// 	sum+=0.9;
	// }
	// if(year%60==6){
	// 	cout<<"丙寅年生 ——————    六钱"<<endl;
	// 	sum+=0.6;
	// }
	// if(year%60==7){
	// 	cout<<"丁卯年生 ——————    七钱"<<endl;
	// 	sum+=0.7;
	// }
	// if(year%60==8){
	// 	cout<<"戊辰年生 —————— 一两二钱"<<endl;
	// 	sum+=1.2;
	// }
	// if(year%60==9){
	// 	cout<<"己巳年生 ——————    五钱"<<endl;
	// 	sum+=0.5;
	// }
	// if(year%60==10){
	// 	cout<<"庚午年生 ——————    九钱"<<endl;
	// 	sum+=0.9;
	// }
	// if(year%60==11){
	// 	cout<<"辛未年生 ——————    八钱"<<endl;
	// 	sum+=0.8;
	// }
	// if(year%60==12){
	// 	cout<<"壬申年生 ——————    七钱"<<endl;
	// 	sum+=0.7;
	// }
	// if(year%60==13){
	// 	cout<<"庚午年生 ——————    九钱"<<endl;
	// 	sum+=0.9;
	// }
