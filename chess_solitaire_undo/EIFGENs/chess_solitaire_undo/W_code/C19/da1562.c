/*
 * Code for class DATE_TIME_PARSER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1562_15957(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1562_15958(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1562_15959(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1562_15960(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1562_15961(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1562_15962(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1562_15963(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1562_15964(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1562_15965(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1562_15966(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1562_15967(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1562_15968(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1562_15969(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1562_15970(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1562_15971(EIF_REFERENCE);
extern void F1562_15972(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1562_15973(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1562_15974(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1562_15975(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1562_15976(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1562_15977(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1562_15978(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1562_15979(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1562_15980(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1562_15981(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1562_15982(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1562_15983(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1562_15984(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1562_15985(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1562_15986(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1562_15987(EIF_REFERENCE);
extern void F1562_16547(EIF_REFERENCE, int);
extern void EIF_Minit1562(void);

#ifdef __cplusplus
}
#endif

#include <math.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DATE_TIME_PARSER}.make */
void F1562_15957 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1561, Current, 0, 1, 21995);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1561, Current, 21995);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,548,0xFF01,1177,221,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1561, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("code_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 11689, 0xF8000224, 0); /* code */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11689, dtype)) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("code_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11689, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {DATE_TIME_PARSER}.source_string */
EIF_TYPED_VALUE F1562_15958 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11663,Dtype(Current)));
	return r;
}


/* {DATE_TIME_PARSER}.year */
EIF_TYPED_VALUE F1562_15959 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "year";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1561, Current, 0, 0, 21997);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1561, Current, 21997);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("value_parsed", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11671, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11682, dtype));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {DATE_TIME_PARSER}.month */
EIF_TYPED_VALUE F1562_15960 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "month";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1561, Current, 0, 0, 21998);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1561, Current, 21998);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("value_parsed", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11671, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11683, dtype));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {DATE_TIME_PARSER}.day */
EIF_TYPED_VALUE F1562_15961 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "day";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1561, Current, 0, 0, 21999);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1561, Current, 21999);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("value_parsed", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11671, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11684, dtype));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {DATE_TIME_PARSER}.hour */
EIF_TYPED_VALUE F1562_15962 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "hour";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1561, Current, 0, 0, 22000);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1561, Current, 22000);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("value_parsed", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11671, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11685, dtype));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {DATE_TIME_PARSER}.minute */
EIF_TYPED_VALUE F1562_15963 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "minute";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1561, Current, 0, 0, 22001);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1561, Current, 22001);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("value_parsed", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11671, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11686, dtype));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {DATE_TIME_PARSER}.fine_second */
EIF_TYPED_VALUE F1562_15964 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "fine_second";
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN tb1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1561, Current, 0, 0, 22002);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1561, Current, 22002);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("value_parsed", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11671, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(11687, dtype));
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
}

/* {DATE_TIME_PARSER}.day_text */
EIF_TYPED_VALUE F1562_15965 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "day_text";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1561, Current, 0, 0, 22003);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1561, Current, 22003);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("value_parsed", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11671, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11688, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {DATE_TIME_PARSER}.parsed */
EIF_TYPED_VALUE F1562_15966 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(11671,Dtype(Current)));
	return r;
}


/* {DATE_TIME_PARSER}.is_set_up */
EIF_TYPED_VALUE F1562_15967 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_set_up";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1561, Current, 1, 0, 22005);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1561, Current, 22005);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tb2 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11691, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11690, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tb2 = (EIF_BOOLEAN)(tr1 != NULL);
	}
	if (tb2) {
		tb2 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11663, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = RTCCL(tr1);
		if (EIF_TEST(loc1)) {
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", loc1))(loc1)).it_b);
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		tb1 = tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
}

/* {DATE_TIME_PARSER}.is_date */
EIF_TYPED_VALUE F1562_15968 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_date";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1561, Current, 0, 0, 22006);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1561, Current, 22006);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_parsed", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11671, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11664, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11665, dtype))(Current)).it_i4);
	ui4_2 = ti4_2;
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11666, dtype))(Current)).it_i4);
	ui4_3 = ti4_3;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(11596, dtype))(Current, ui4_1x, ui4_2x, ui4_3x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef ui4_2
#undef ui4_3
}

/* {DATE_TIME_PARSER}.is_time */
EIF_TYPED_VALUE F1562_15969 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_time";
	RTEX;
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1561, Current, 0, 0, 22007);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1561, Current, 22007);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_parsed", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11671, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11667, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11668, dtype))(Current)).it_i4);
	ui4_2 = ti4_2;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11669, dtype))(Current)).it_r8);
	ur8_1 = tr8_1;
	ub1 = (EIF_BOOLEAN) 0;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(11635, dtype))(Current, ui4_1x, ui4_2x, ur8_1x, ub1x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur8_1
#undef ui4_1
#undef ui4_2
#undef ub1
}

/* {DATE_TIME_PARSER}.is_date_time */
EIF_TYPED_VALUE F1562_15970 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_date_time";
	RTEX;
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1561, Current, 0, 0, 22008);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1561, Current, 22008);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_parsed", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11671, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11664, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11665, dtype))(Current)).it_i4);
	ui4_2 = ti4_2;
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11666, dtype))(Current)).it_i4);
	ui4_3 = ti4_3;
	ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11667, dtype))(Current)).it_i4);
	ui4_4 = ti4_4;
	ti4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11668, dtype))(Current)).it_i4);
	ui4_5 = ti4_5;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11669, dtype))(Current)).it_r8);
	ur8_1 = tr8_1;
	ub1 = (EIF_BOOLEAN) 0;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(11661, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ur8_1x, ub1x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur8_1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ub1
}

/* {DATE_TIME_PARSER}.is_value_valid */
EIF_TYPED_VALUE F1562_15971 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_value_valid";
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1561, Current, 0, 0, 22009);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1561, Current, 22009);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tb2 = *(EIF_BOOLEAN *)(Current + RTWA(11671, dtype));
	if (tb2) {
		tb2 = '\01';
		tb3 = '\01';
		tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11673, dtype))(Current)).it_b);
		if (!tb4) {
			tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11674, dtype))(Current)).it_b);
			tb3 = tb4;
		}
		if (!tb3) {
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11675, dtype))(Current)).it_b);
			tb2 = tb3;
		}
		tb1 = tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {DATE_TIME_PARSER}.set_source_string */
void F1562_15972 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_source_string";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1561, Current, 0, 1, 22010);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1561, Current, 22010);
	RTCC(arg1, 1561, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_empty_string", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", arg1))(arg1)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 11663, 0xF80000E8, 0); /* source_string */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11663, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 11671, 0x04000000, 1); /* parsed */
	*(EIF_BOOLEAN *)(Current + RTWA(11671, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("source_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11663, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("not_parsed", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11671, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {DATE_TIME_PARSER}.set_day_array */
void F1562_15973 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_day_array";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1561, Current, 0, 1, 22011);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1561, Current, 22011);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,340,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1561, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 11691, 0xF8000154, 0); /* days */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11691, dtype)) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("days_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11691, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {DATE_TIME_PARSER}.set_month_array */
void F1562_15974 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_month_array";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1561, Current, 0, 1, 22012);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1561, Current, 22012);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,340,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1561, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 11690, 0xF8000154, 0); /* months */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11690, dtype)) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("months_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11690, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {DATE_TIME_PARSER}.set_base_century */
void F1562_15975 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_base_century";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1561, Current, 0, 1, 21981);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1561, Current, 21981);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("base_century_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 != ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 100L)) == ((EIF_INTEGER_32) 0L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 11692, 0x10000000, 1); /* base_century */
	*(EIF_INTEGER_32 *)(Current + RTWA(11692, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("base_century_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11692, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {DATE_TIME_PARSER}.parse */
void F1562_15976 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parse";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc10 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc11 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc12 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,loc15);
	RTLR(2,tr1);
	RTLR(3,loc7);
	RTLR(4,ur1);
	RTLR(5,loc13);
	RTLR(6,tr2);
	RTLR(7,loc14);
	RTLR(8,loc16);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_BOOL, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_BOOL, &loc10);
	RTLU(SK_BOOL, &loc11);
	RTLU(SK_BOOL, &loc12);
	RTLU(SK_REF, &loc13);
	RTLU(SK_REF, &loc14);
	RTLU(SK_REF, &loc15);
	RTLU(SK_REF, &loc16);
	
	RTEAA(l_feature_name, 1561, Current, 16, 0, 21982);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1561, Current, 21982);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("setup_complete", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11672, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTCT0("source_string_attached", EX_CHECK);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11663, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc15 = RTCCL(tr1);
	if (EIF_TEST(loc15)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(3);
	RTDBGAL(7, 0xF80000E8, 0, 0); /* loc7 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "as_upper", loc15))(loc15)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc7 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
	tr1 = RTLN(eif_new_type(978, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(4,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6271, "year_now", tr1))(tr1)).it_i4);
	loc9 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 11682, 0x10000000, 1); /* year_val */
	*(EIF_INTEGER_32 *)(Current + RTWA(11682, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 11683, 0x10000000, 1); /* month_val */
	*(EIF_INTEGER_32 *)(Current + RTWA(11683, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(7);
	RTDBGAA(Current, dtype, 11684, 0x10000000, 1); /* day_val */
	*(EIF_INTEGER_32 *)(Current + RTWA(11684, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(8);
	RTDBGAA(Current, dtype, 11685, 0x10000000, 1); /* hour_val */
	*(EIF_INTEGER_32 *)(Current + RTWA(11685, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(9);
	RTDBGAA(Current, dtype, 11686, 0x10000000, 1); /* minute_val */
	*(EIF_INTEGER_32 *)(Current + RTWA(11686, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(10);
	RTDBGAA(Current, dtype, 11687, 0x20000000, 1); /* fine_second_val */
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	*(EIF_REAL_64 *)(Current + RTWA(11687, dtype)) = (EIF_REAL_64) tr8_1;
	RTHOOK(11);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(12);
	RTDBGAL(8, 0x04000000, 1, 0); /* loc8 */
	ur1 = RTCCL(loc7);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11361, dtype))(Current, ur1x)).it_b);
	loc8 = (EIF_BOOLEAN) tb1;
	RTHOOK(13);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(14);
		ti4_1 = *(EIF_INTEGER_32 *)(loc7 + RTVA(4768, "count", loc7));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(15);
		RTDBGAL(13, 0xF8000499, 0, 0); /* loc13 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11689, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(15,1);
		ui4_1 = loc3;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2974, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc13 = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(16);
		if ((EIF_BOOLEAN)(loc13 == NULL)) {
			RTHOOK(17);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			ti4_2 = *(EIF_INTEGER_32 *)(loc7 + RTVA(4768, "count", loc7));
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L));
		} else {
			RTHOOK(18);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7880, "is_separator_code", loc13))(loc13)).it_b);
			if (tb1) {
				RTHOOK(19);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				loc3++;
				RTHOOK(20);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				ti4_2 = *(EIF_INTEGER_32 *)(loc13 + RTVA(7885, "count_max", loc13));
				loc1 += ti4_2;
			} else {
				RTHOOK(21);
				if (loc8) {
					RTHOOK(22);
					RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
					ur1 = RTCCL(loc7);
					ui4_1 = loc1;
					ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(11359, dtype))(Current, ur1x, ui4_1x)).it_i4);
					loc2 = (EIF_INTEGER_32) ti4_2;
				} else {
					RTHOOK(23);
					RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
					ti4_2 = *(EIF_INTEGER_32 *)(loc13 + RTVA(7885, "count_max", loc13));
					loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + ti4_2) - ((EIF_INTEGER_32) 1L)) * ((EIF_INTEGER_32) -1L));
				}
				RTHOOK(24);
				RTDBGAL(14, 0xF80000E8, 0, 0); /* loc14 */
				ur1 = RTCCL(loc7);
				ui4_1 = loc1;
				ui4_2 = loc2;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(11360, dtype))(Current, ur1x, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(24,1);
				tr2 = eif_boxed_item(tr1,1);
				loc14 = (EIF_REFERENCE) RTCCL(tr2);
				RTHOOK(25);
				if ((EIF_BOOLEAN) (loc2 <= ((EIF_INTEGER_32) 0L))) {
					RTHOOK(26);
					RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
					loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc2 + ((EIF_INTEGER_32) 1L));
				}
				RTHOOK(27);
				RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
				ti4_2 = *(EIF_INTEGER_32 *)(loc13 + RTVA(7890, "type", loc13));
				loc5 = (EIF_INTEGER_32) ti4_2;
				RTHOOK(28);
				switch (loc5) {
					case 1L:
					case 2L:
						RTHOOK(29);
						RTDBGAA(Current, dtype, 11684, 0x10000000, 1); /* day_val */
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4707, "to_integer", loc14))(loc14)).it_i4);
						*(EIF_INTEGER_32 *)(Current + RTWA(11684, dtype)) = (EIF_INTEGER_32) ti4_2;
						break;
					case 3L:
						RTHOOK(30);
						RTDBGAA(Current, dtype, 11688, 0xF80000E8, 0); /* day_text_val */
						tr1 = RTCCL(loc14);
						RTAR(Current, tr1);
						*(EIF_REFERENCE *)(Current + RTWA(11688, dtype)) = (EIF_REFERENCE) tr1;
						break;
					case 4L:
						RTHOOK(31);
						RTDBGAA(Current, dtype, 11682, 0x10000000, 1); /* year_val */
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4707, "to_integer", loc14))(loc14)).it_i4);
						*(EIF_INTEGER_32 *)(Current + RTWA(11682, dtype)) = (EIF_INTEGER_32) ti4_2;
						break;
					case 5L:
						RTHOOK(32);
						ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11692, dtype));
						if ((EIF_BOOLEAN) (ti4_2 < ((EIF_INTEGER_32) 0L))) {
							RTHOOK(33);
							RTDBGAA(Current, dtype, 11682, 0x10000000, 1); /* year_val */
							ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4707, "to_integer", loc14))(loc14)).it_i4);
							ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(11692, dtype));
							*(EIF_INTEGER_32 *)(Current + RTWA(11682, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_2 - ti4_3);
							RTHOOK(34);
							ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11682, dtype));
							if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_2 - loc9) > ((EIF_INTEGER_32) 50L))) {
								RTHOOK(35);
								RTDBGAA(Current, dtype, 11682, 0x10000000, 1); /* year_val */
								(*(EIF_INTEGER_32 *)(Current + RTWA(11682, dtype))) -= ((EIF_INTEGER_32) 100L);
							} else {
								RTHOOK(36);
								ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11682, dtype));
								if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc9 - ti4_2) > ((EIF_INTEGER_32) 50L))) {
									RTHOOK(37);
									RTDBGAA(Current, dtype, 11682, 0x10000000, 1); /* year_val */
									(*(EIF_INTEGER_32 *)(Current + RTWA(11682, dtype))) += ((EIF_INTEGER_32) 100L);
								}
							}
						} else {
							RTHOOK(38);
							RTDBGAA(Current, dtype, 11682, 0x10000000, 1); /* year_val */
							ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4707, "to_integer", loc14))(loc14)).it_i4);
							ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(11692, dtype));
							*(EIF_INTEGER_32 *)(Current + RTWA(11682, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_2 - ti4_3);
						}
						break;
					case 6L:
					case 7L:
						RTHOOK(39);
						RTDBGAA(Current, dtype, 11683, 0x10000000, 1); /* month_val */
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4707, "to_integer", loc14))(loc14)).it_i4);
						*(EIF_INTEGER_32 *)(Current + RTWA(11683, dtype)) = (EIF_INTEGER_32) ti4_2;
						break;
					case 8L:
						RTHOOK(40);
						RTCT0("months_attached", EX_CHECK);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11690, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc16 = RTCCL(tr1);
						if (EIF_TEST(loc16)) {
							RTCK0;
						} else {
							RTCF0;
						}
						RTHOOK(41);
						RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
						loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						for (;;) {
							RTHOOK(42);
							if ((EIF_BOOLEAN) (loc4 > ((EIF_INTEGER_32) 12L))) break;
							RTHOOK(43);
							ui4_1 = loc4;
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", loc16))(loc16, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(43,1);
							ur1 = RTCCL(loc14);
							tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4754, "same_string", tr1))(tr1, ur1x)).it_b);
							if (tb1) {
								RTHOOK(44);
								RTDBGAA(Current, dtype, 11683, 0x10000000, 1); /* month_val */
								*(EIF_INTEGER_32 *)(Current + RTWA(11683, dtype)) = (EIF_INTEGER_32) loc4;
							}
							RTHOOK(45);
							RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
							loc4++;
						}
						break;
					case 9L:
					case 10L:
						RTHOOK(46);
						RTDBGAA(Current, dtype, 11685, 0x10000000, 1); /* hour_val */
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4707, "to_integer", loc14))(loc14)).it_i4);
						*(EIF_INTEGER_32 *)(Current + RTWA(11685, dtype)) = (EIF_INTEGER_32) ti4_2;
						break;
					case 11L:
					case 12L:
						RTHOOK(47);
						RTDBGAA(Current, dtype, 11685, 0x10000000, 1); /* hour_val */
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4707, "to_integer", loc14))(loc14)).it_i4);
						*(EIF_INTEGER_32 *)(Current + RTWA(11685, dtype)) = (EIF_INTEGER_32) ti4_2;
						RTHOOK(48);
						if (loc11) {
							RTHOOK(49);
							if (loc10) {
								RTHOOK(50);
								RTDBGAA(Current, dtype, 11685, 0x10000000, 1); /* hour_val */
								(*(EIF_INTEGER_32 *)(Current + RTWA(11685, dtype))) += ((EIF_INTEGER_32) 12L);
								RTHOOK(51);
								ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11685, dtype));
								if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 24L))) {
									RTHOOK(52);
									RTDBGAA(Current, dtype, 11685, 0x10000000, 1); /* hour_val */
									*(EIF_INTEGER_32 *)(Current + RTWA(11685, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
								}
							} else {
								RTHOOK(53);
								ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11685, dtype));
								if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 12L))) {
									RTHOOK(54);
									RTDBGAA(Current, dtype, 11685, 0x10000000, 1); /* hour_val */
									*(EIF_INTEGER_32 *)(Current + RTWA(11685, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
								}
							}
						} else {
							RTHOOK(55);
							RTDBGAL(12, 0x04000000, 1, 0); /* loc12 */
							loc12 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						}
						break;
					case 24L:
						RTHOOK(56);
						RTDBGAL(11, 0x04000000, 1, 0); /* loc11 */
						loc11 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						RTHOOK(57);
						RTDBGAL(10, 0x04000000, 1, 0); /* loc10 */
						tr1 = RTMS_EX_H("PM",2,20557);
						ur1 = tr1;
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4752, "is_case_insensitive_equal", loc14))(loc14, ur1x)).it_b);
						loc10 = (EIF_BOOLEAN) tb1;
						break;
					case 13L:
					case 14L:
						RTHOOK(58);
						RTDBGAA(Current, dtype, 11686, 0x10000000, 1); /* minute_val */
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4707, "to_integer", loc14))(loc14)).it_i4);
						*(EIF_INTEGER_32 *)(Current + RTWA(11686, dtype)) = (EIF_INTEGER_32) ti4_2;
						break;
					case 15L:
					case 16L:
						RTHOOK(59);
						RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4707, "to_integer", loc14))(loc14)).it_i4);
						loc6 = (EIF_INTEGER_32) ti4_2;
						break;
					case 17L:
						RTHOOK(60);
						RTDBGAA(Current, dtype, 11687, 0x20000000, 1); /* fine_second_val */
						tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4717, "to_double", loc14))(loc14)).it_r8);
						ti4_2 = *(EIF_INTEGER_32 *)(loc14 + RTVA(4768, "count", loc14));
						tr8_2 = (EIF_REAL_64) ((ti4_2));
						*(EIF_REAL_64 *)(Current + RTWA(11687, dtype)) = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) ((EIF_REAL_64) pow ((EIF_REAL_64) (((EIF_INTEGER_32) 10L)), (EIF_REAL_64) (tr8_2))));
						break;
					default:
						RTEC(EN_WHEN);
				}
				RTHOOK(61);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1 = (EIF_INTEGER_32) loc2;
				RTHOOK(62);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				loc3++;
			}
		}
	}
	RTHOOK(63);
	if (loc12) {
		RTHOOK(64);
		if ((EIF_BOOLEAN) !loc11) {
			RTHOOK(65);
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11685, dtype));
			if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 12L))) {
				RTHOOK(66);
				RTDBGAA(Current, dtype, 11685, 0x10000000, 1); /* hour_val */
				*(EIF_INTEGER_32 *)(Current + RTWA(11685, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			}
		} else {
			RTHOOK(67);
			if (loc10) {
				RTHOOK(68);
				RTDBGAA(Current, dtype, 11685, 0x10000000, 1); /* hour_val */
				(*(EIF_INTEGER_32 *)(Current + RTWA(11685, dtype))) += ((EIF_INTEGER_32) 12L);
				RTHOOK(69);
				ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11685, dtype));
				if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 24L))) {
					RTHOOK(70);
					RTDBGAA(Current, dtype, 11685, 0x10000000, 1); /* hour_val */
					*(EIF_INTEGER_32 *)(Current + RTWA(11685, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
				}
			} else {
				RTHOOK(71);
				ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11685, dtype));
				if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 12L))) {
					RTHOOK(72);
					RTDBGAA(Current, dtype, 11685, 0x10000000, 1); /* hour_val */
					*(EIF_INTEGER_32 *)(Current + RTWA(11685, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				}
			}
		}
	}
	RTHOOK(73);
	RTDBGAA(Current, dtype, 11687, 0x20000000, 1); /* fine_second_val */
	tr8_2 = (EIF_REAL_64) (loc6);
	(*(EIF_REAL_64 *)(Current + RTWA(11687, dtype))) += tr8_2;
	RTHOOK(74);
	RTDBGAA(Current, dtype, 11671, 0x04000000, 1); /* parsed */
	*(EIF_BOOLEAN *)(Current + RTWA(11671, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(75);
		RTCT("string_parsed", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11671, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(76);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(18);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
}

/* {DATE_TIME_PARSER}.year_val */
EIF_TYPED_VALUE F1562_15977 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(11682,Dtype(Current)));
	return r;
}


/* {DATE_TIME_PARSER}.month_val */
EIF_TYPED_VALUE F1562_15978 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(11683,Dtype(Current)));
	return r;
}


/* {DATE_TIME_PARSER}.day_val */
EIF_TYPED_VALUE F1562_15979 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(11684,Dtype(Current)));
	return r;
}


/* {DATE_TIME_PARSER}.hour_val */
EIF_TYPED_VALUE F1562_15980 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(11685,Dtype(Current)));
	return r;
}


/* {DATE_TIME_PARSER}.minute_val */
EIF_TYPED_VALUE F1562_15981 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(11686,Dtype(Current)));
	return r;
}


/* {DATE_TIME_PARSER}.fine_second_val */
EIF_TYPED_VALUE F1562_15982 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(11687,Dtype(Current)));
	return r;
}


/* {DATE_TIME_PARSER}.day_text_val */
EIF_TYPED_VALUE F1562_15983 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11688,Dtype(Current)));
	return r;
}


/* {DATE_TIME_PARSER}.code */
EIF_TYPED_VALUE F1562_15984 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11689,Dtype(Current)));
	return r;
}


/* {DATE_TIME_PARSER}.months */
EIF_TYPED_VALUE F1562_15985 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11690,Dtype(Current)));
	return r;
}


/* {DATE_TIME_PARSER}.days */
EIF_TYPED_VALUE F1562_15986 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11691,Dtype(Current)));
	return r;
}


/* {DATE_TIME_PARSER}.base_century */
EIF_TYPED_VALUE F1562_15987 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(11692,Dtype(Current)));
	return r;
}


/* {DATE_TIME_PARSER}._invariant */
void F1562_16547 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 1561, Current, 0, 16546);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("valid_value_definition", Current);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11676, dtype))(Current)).it_b);
	tb2 = '\0';
	tb3 = *(EIF_BOOLEAN *)(Current + RTWA(11671, dtype));
	if (tb3) {
		tb3 = '\01';
		tb4 = '\01';
		tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11673, dtype))(Current)).it_b);
		if (!tb5) {
			tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11674, dtype))(Current)).it_b);
			tb4 = tb5;
		}
		if (!tb4) {
			tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11675, dtype))(Current)).it_b);
			tb3 = tb4;
		}
		tb2 = tb3;
	}
	if ((EIF_BOOLEAN)(tb1 == tb2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("valid_value_implies_parsing", Current);
	tb1 = '\01';
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11676, dtype))(Current)).it_b);
	if (tb2) {
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(11671, dtype));
		tb1 = tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
}

void EIF_Minit1562 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
