#ifndef	__RTL8821AU_DM_H__
#define __RTL8821AU_DM_H__

#include <odm_types.h>
#include <odm.h>
#include <HalPhyRf.h>

#define CCK_TABLE_SIZE				33

extern	u8 CCKSwingTable_Ch1_Ch13[CCK_TABLE_SIZE][8];
extern	u8 CCKSwingTable_Ch14 [CCK_TABLE_SIZE][8];
extern	u8 CCKSwingTable_Ch1_Ch13_New[CCK_TABLE_SIZE][8];
extern	u8 CCKSwingTable_Ch14_New [CCK_TABLE_SIZE][8];

void rtl8812au_get_delta_swing_table(struct rtl_priv *rtlpriv,
					    u8 **up_a, u8 **down_a,
					    u8 **up_b, u8 **down_b);
void rtl8821au_get_delta_swing_table(struct rtl_priv *rtlpriv,
					    u8 **up_a, u8 **down_a,
					    u8 **up_b, u8 **down_b);
void DoIQK_8812A(struct rtl_priv *rtlpriv, u8 DeltaThermalIndex,
	u8 	ThermalValue, u8 Threshold);
void DoIQK_8821A(struct rtl_priv *rtlpriv, u8 DeltaThermalIndex,
	u8 ThermalValue, u8 Threshold);
void ODM_TxPwrTrackSetPwr8812A(struct rtl_priv *rtlpriv, PWRTRACK_METHOD Method,
	u8 	RFPath, u8 	ChannelMappedIndex);
void ODM_TxPwrTrackSetPwr8821A(struct rtl_priv *rtlpriv, PWRTRACK_METHOD Method,
	u8 RFPath, u8 ChannelMappedIndex);



#endif
