/* TA-LIB Copyright (c) 1999-2008, Mario Fortier
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or
 * without modification, are permitted provided that the following
 * conditions are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in
 *   the documentation and/or other materials provided with the
 *   distribution.
 *
 * - Neither name of author nor the names of its contributors
 *   may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * REGENTS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/* List of contributors:
 *
 *  Initial  Name/description
 *  -------------------------------------------------------------------
 *  AC       Angelo Ciceri
 *
 *
 * Change history:
 *
 *  MMDDYY BY   Description
 *  -------------------------------------------------------------------
 *  100304 AC   Creation           
 *
 */

/**** START GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
/* All code within this section is automatically
 * generated by gen_code. Any modification will be lost
 * next time gen_code is run.
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */    #include "TA-Lib-Core.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (RetCode::InternalError)
/* Generated */    namespace TicTacTec { namespace TA { namespace Library {
/* Generated */ #elif defined( _JAVA )
/* Generated */    #include "ta_defs.h"
/* Generated */    #include "ta_java_defs.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (RetCode.InternalError)
/* Generated */ #else
/* Generated */    #include <string.h>
/* Generated */    #include <math.h>
/* Generated */    #include "ta_func.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #ifndef TA_UTILITY_H
/* Generated */    #include "ta_utility.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #ifndef TA_MEMORY_H
/* Generated */    #include "ta_memory.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #define TA_PREFIX(x) TA_##x
/* Generated */ #define INPUT_TYPE   double
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::CdlEveningStarLookback( double        optInPenetration )  /* From 0 to TA_REAL_MAX */
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int cdlEveningStarLookback( double        optInPenetration )  /* From 0 to TA_REAL_MAX */
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_CDLEVENINGSTAR_Lookback( double        optInPenetration )  /* From 0 to TA_REAL_MAX */
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */    if( optInPenetration == TA_REAL_DEFAULT )
/* Generated */       optInPenetration = 3.000000e-1;
/* Generated */    else if( (optInPenetration < 0.000000e+0) ||/* Generated */  (optInPenetration > 3.000000e+37) )
/* Generated */       return -1;
/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/**** END GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/

   /* insert lookback code here. */
    UNUSED_VARIABLE(optInPenetration);

    return max( TA_CANDLEAVGPERIOD(BodyShort), TA_CANDLEAVGPERIOD(BodyLong) ) + 2;
}

/**** START GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
/*
 * TA_CDLEVENINGSTAR - Evening Star
 * 
 * Input  = Open, High, Low, Close
 * Output = int
 * 
 * Optional Parameters
 * -------------------
 * optInPenetration:(From 0 to TA_REAL_MAX)
 *    Percentage of penetration of a candle within another candle
 * 
 * 
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::CdlEveningStar( int    startIdx,
/* Generated */                                                int    endIdx,
/* Generated */                                                SubArray<double>^ inOpen,
/* Generated */                                                SubArray<double>^ inHigh,
/* Generated */                                                SubArray<double>^ inLow,
/* Generated */                                                SubArray<double>^ inClose,
/* Generated */                                                double        optInPenetration, /* From 0 to TA_REAL_MAX */
/* Generated */                                                [Out]int%    outBegIdx,
/* Generated */                                                [Out]int%    outNBElement,
/* Generated */                                                SubArray<int>^  outInteger )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::CdlEveningStar( int    startIdx,
/* Generated */                                                int    endIdx,
/* Generated */                                                cli::array<double>^ inOpen,
/* Generated */                                                cli::array<double>^ inHigh,
/* Generated */                                                cli::array<double>^ inLow,
/* Generated */                                                cli::array<double>^ inClose,
/* Generated */                                                double        optInPenetration, /* From 0 to TA_REAL_MAX */
/* Generated */                                                [Out]int%    outBegIdx,
/* Generated */                                                [Out]int%    outNBElement,
/* Generated */                                                cli::array<int>^  outInteger )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdlEveningStar( int    startIdx,
/* Generated */                                int    endIdx,
/* Generated */                                double       inOpen[],
/* Generated */                                double       inHigh[],
/* Generated */                                double       inLow[],
/* Generated */                                double       inClose[],
/* Generated */                                double        optInPenetration, /* From 0 to TA_REAL_MAX */
/* Generated */                                MInteger     outBegIdx,
/* Generated */                                MInteger     outNBElement,
/* Generated */                                int           outInteger[] )
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_CDLEVENINGSTAR( int    startIdx,
/* Generated */                                          int    endIdx,
/* Generated */                                                     const double inOpen[],
/* Generated */                                                     const double inHigh[],
/* Generated */                                                     const double inLow[],
/* Generated */                                                     const double inClose[],
/* Generated */                                                     double        optInPenetration, /* From 0 to TA_REAL_MAX */
/* Generated */                                                     int          *outBegIdx,
/* Generated */                                                     int          *outNBElement,
/* Generated */                                                     int           outInteger[] )
/* Generated */ #endif
/**** END GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
{
   /* Insert local variables here. */
    double BodyShortPeriodTotal, BodyLongPeriodTotal, BodyShortPeriodTotal2;
    int i, outIdx, BodyShortTrailingIdx, BodyLongTrailingIdx, lookbackTotal;

/**** START GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    /* Validate the requested output range. */
/* Generated */    if( startIdx < 0 )
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */    if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */ 
/* Generated */    #if !defined(_JAVA)
/* Generated */    /* Verify required price component. */
/* Generated */    if(!inOpen||!inHigh||!inLow||!inClose)
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    if( optInPenetration == TA_REAL_DEFAULT )
/* Generated */       optInPenetration = 3.000000e-1;
/* Generated */    else if( (optInPenetration < 0.000000e+0) ||/* Generated */  (optInPenetration > 3.000000e+37) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outInteger )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/

   /* Identify the minimum number of price bar needed
    * to calculate at least one output.
    */

   lookbackTotal = LOOKBACK_CALL(CDLEVENINGSTAR)(optInPenetration);

   /* Move up the start index if there is not
    * enough initial data.
    */
   if( startIdx < lookbackTotal )
      startIdx = lookbackTotal;

   /* Make sure there is still something to evaluate. */
   if( startIdx > endIdx )
   {
      VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
      VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
      return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
   }

   /* Do the calculation using tight loops. */
   /* Add-up the initial period, except for the last value. */
   BodyLongPeriodTotal = 0;
   BodyShortPeriodTotal = 0;
   BodyShortPeriodTotal2 = 0;
   BodyLongTrailingIdx = startIdx -2 - TA_CANDLEAVGPERIOD(BodyLong);
   BodyShortTrailingIdx = startIdx -1 - TA_CANDLEAVGPERIOD(BodyShort);
   
   i = BodyLongTrailingIdx;
   while( i < startIdx-2 ) {
        BodyLongPeriodTotal += TA_CANDLERANGE( BodyLong, i );
        i++;
   }
   i = BodyShortTrailingIdx;
   while( i < startIdx-1 ) {
        BodyShortPeriodTotal += TA_CANDLERANGE( BodyShort, i );
        BodyShortPeriodTotal2 += TA_CANDLERANGE( BodyShort, i+1 );
        i++;
   }
   i = startIdx;

#ifdef TA_LIB_PRO
      /* Section for code distributed with TA-Lib Pro only. */
#endif

   /* Proceed with the calculation for the requested range.
    * Must have:
    * - first candle: long white real body
    * - second candle: star (short real body gapping up)
    * - third candle: black real body that moves well within the first candle's real body
    * The meaning of "short" and "long" is specified with TA_SetCandleSettings
    * The meaning of "moves well within" is specified with optInPenetration and "moves" should mean the real body should
    * not be short ("short" is specified with TA_SetCandleSettings) - Greg Morris wants it to be long, someone else want
    * it to be relatively long
    * outInteger is negative (-1 to -100): evening star is always bearish; 
    * the user should consider that an evening star is significant when it appears in an uptrend, 
    * while this function does not consider the trend
    */
   outIdx = 0;
   do
   {

#ifdef TA_LIB_PRO
      /* Section for code distributed with TA-Lib Pro only. */
#else
        if( TA_REALBODY(i-2) > TA_CANDLEAVERAGE( BodyLong, BodyLongPeriodTotal, i-2 ) &&         // 1st: long
            TA_CANDLECOLOR(i-2) == 1 &&                                                             //           white
            TA_REALBODY(i-1) <= TA_CANDLEAVERAGE( BodyShort, BodyShortPeriodTotal, i-1 ) &&      // 2nd: short
            TA_REALBODYGAPUP(i-1,i-2) &&                                                            //            gapping up
            TA_REALBODY(i) > TA_CANDLEAVERAGE( BodyShort, BodyShortPeriodTotal2, i ) &&          // 3rd: longer than short
            TA_CANDLECOLOR(i) == -1 &&                                                              //          black real body
            inClose[i] < inClose[i-2] - TA_REALBODY(i-2) * optInPenetration                         //               closing well within 1st rb
          )
            outInteger[outIdx++] = -100;
        else
            outInteger[outIdx++] = 0;
#endif
        /* add the current range and subtract the first range: this is done after the pattern recognition 
         * when avgPeriod is not 0, that means "compare with the previous candles" (it excludes the current candle)
         */
        BodyLongPeriodTotal += TA_CANDLERANGE( BodyLong, i-2 ) - TA_CANDLERANGE( BodyLong, BodyLongTrailingIdx );
        BodyShortPeriodTotal += TA_CANDLERANGE( BodyShort, i-1 ) - TA_CANDLERANGE( BodyShort, BodyShortTrailingIdx );
        BodyShortPeriodTotal2 += TA_CANDLERANGE( BodyShort, i ) - TA_CANDLERANGE( BodyShort, BodyShortTrailingIdx+1 );
        i++; 
        BodyLongTrailingIdx++;
        BodyShortTrailingIdx++;
   } while( i <= endIdx );

   /* All done. Indicate the output limits and return. */
   VALUE_HANDLE_DEREF(outNBElement) = outIdx;
   VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;

   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::CdlEveningStarStateInit( struct TA_CdlEveningStar_State** _state,
/* Generated */                                  double        optInPenetration )  /* From 0 to TA_REAL_MAX */
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int cdlEveningStarStateInit( struct TA_cdlEveningStar_State** _state,
/* Generated */                                   double        optInPenetration )  /* From 0 to TA_REAL_MAX */
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_CDLEVENINGSTAR_StateInit( struct TA_CDLEVENINGSTAR_State** _state,
/* Generated */                                                      double        optInPenetration )  /* From 0 to TA_REAL_MAX */
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/

{
   /* insert local variable here */

/**** START GENCODE SECTION 6 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    if (_state == NULL)
/* Generated */          return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    if( optInPenetration == TA_REAL_DEFAULT )
/* Generated */       optInPenetration = 3.000000e-1;
/* Generated */    else if( (optInPenetration < 0.000000e+0) ||/* Generated */  (optInPenetration > 3.000000e+37) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    STATE = calloc(1, sizeof(struct TA_CDLEVENINGSTAR_State));
/* Generated */    STATE_P.mem_index = 0;
/* Generated */    STATE_P.optInPenetration = optInPenetration;
/* Generated */    #ifndef TA_CDLEVENINGSTAR_SUPPRESS_MEMORY_ALLOCATION
/* Generated */    MEM_SIZE_P = TA_CDLEVENINGSTAR_Lookback(optInPenetration );
/* Generated */    if (MEM_SIZE_P > 0)
/* Generated */          MEM_P = calloc(MEM_SIZE_P, sizeof(struct TA_CDLEVENINGSTAR_Data));
/* Generated */    else
/* Generated */    #endif
/* Generated */          MEM_P = NULL;/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 6 - DO NOT DELETE THIS LINE ****/

   /* insert state init code here. */


   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 7 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::CdlEveningStarState( struct TA_CdlEveningStar_State* _state,
/* Generated */                              cli::array<double>^ inOpen,
/* Generated */                              cli::array<double>^ inHigh,
/* Generated */                              cli::array<double>^ inLow,
/* Generated */                              cli::array<double>^ inClose,
/* Generated */                              cli::array<int>^  *outInteger )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int cdlEveningStarState( struct TA_cdlEveningStar_State* _state,
/* Generated */                               double       inOpen,
/* Generated */                               double       inHigh,
/* Generated */                               double       inLow,
/* Generated */                               double       inClose,
/* Generated */                               int           *outInteger )
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_CDLEVENINGSTAR_State( struct TA_CDLEVENINGSTAR_State* _state,
/* Generated */                                                  const double inOpen,
/* Generated */                                                  const double inHigh,
/* Generated */                                                  const double inLow,
/* Generated */                                                  const double inClose,
/* Generated */                                                  int           *outInteger )
/* Generated */ #endif
/**** END GENCODE SECTION 7 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 8 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    if (_state == NULL)
/* Generated */          return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    #if !defined(_JAVA)
/* Generated */    /* Verify required price component. */
/* Generated */    if(!inOpen||!inHigh||!inLow||!inClose)
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    size_t _cur_idx = STATE.mem_index++;
/* Generated */    if (MEM_SIZE > 0) _cur_idx %= MEM_SIZE;
/* Generated */    UNUSED_VARIABLE(_cur_idx); // in case PUSH\POP methods won't be used
/* Generated */    #ifndef TA_CDLEVENINGSTAR_SUPPRESS_EXIT_ON_NOT_ENOUGH_DATA
/* Generated */    if (NEED_MORE_DATA) {
/* Generated */          PUSH_TO_MEM(inOpen,inOpen);
/* Generated */          PUSH_TO_MEM(inHigh,inHigh);
/* Generated */          PUSH_TO_MEM(inLow,inLow);
/* Generated */          PUSH_TO_MEM(inClose,inClose);
/* Generated */    return ENUM_VALUE(RetCode,TA_NEED_MORE_DATA,NeedMoreData); }
/* Generated */    #endif
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outInteger )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 8 - DO NOT DELETE THIS LINE ****/

   /* insert state based TA dunc code here. */

   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 9 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::CdlEveningStarStateFree( struct TA_CdlEveningStar_State** _state )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int cdlEveningStarStateFree( struct TA_cdlEveningStar_State** _state )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_CDLEVENINGSTAR_StateFree( struct TA_CDLEVENINGSTAR_State** _state )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 9 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 10 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    if (_state == NULL)
/* Generated */          return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    if (STATE != NULL) {
/* Generated */          if (MEM_P != NULL) free(MEM_P);
/* Generated */          free(STATE); STATE = NULL;}
/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 10 - DO NOT DELETE THIS LINE ****/

   /* insert state free code here. */   
   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 11 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #define  USE_SINGLE_PRECISION_INPUT
/* Generated */ #undef  TA_LIB_PRO
/* Generated */ #if !defined( _MANAGED ) && !defined( _JAVA )
/* Generated */    #undef   TA_PREFIX
/* Generated */    #define  TA_PREFIX(x) TA_S_##x
/* Generated */ #endif
/* Generated */ #undef   INPUT_TYPE
/* Generated */ #define  INPUT_TYPE float
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::CdlEveningStar( int    startIdx,
/* Generated */                                                int    endIdx,
/* Generated */                                                SubArray<float>^ inOpen,
/* Generated */                                                SubArray<float>^ inHigh,
/* Generated */                                                SubArray<float>^ inLow,
/* Generated */                                                SubArray<float>^ inClose,
/* Generated */                                                double        optInPenetration, /* From 0 to TA_REAL_MAX */
/* Generated */                                                [Out]int%    outBegIdx,
/* Generated */                                                [Out]int%    outNBElement,
/* Generated */                                                SubArray<int>^  outInteger )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::CdlEveningStar( int    startIdx,
/* Generated */                                                int    endIdx,
/* Generated */                                                cli::array<float>^ inOpen,
/* Generated */                                                cli::array<float>^ inHigh,
/* Generated */                                                cli::array<float>^ inLow,
/* Generated */                                                cli::array<float>^ inClose,
/* Generated */                                                double        optInPenetration, /* From 0 to TA_REAL_MAX */
/* Generated */                                                [Out]int%    outBegIdx,
/* Generated */                                                [Out]int%    outNBElement,
/* Generated */                                                cli::array<int>^  outInteger )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdlEveningStar( int    startIdx,
/* Generated */                                int    endIdx,
/* Generated */                                float        inOpen[],
/* Generated */                                float        inHigh[],
/* Generated */                                float        inLow[],
/* Generated */                                float        inClose[],
/* Generated */                                double        optInPenetration, /* From 0 to TA_REAL_MAX */
/* Generated */                                MInteger     outBegIdx,
/* Generated */                                MInteger     outNBElement,
/* Generated */                                int           outInteger[] )
/* Generated */ #else
/* Generated */ TA_RetCode TA_S_CDLEVENINGSTAR( int    startIdx,
/* Generated */                                 int    endIdx,
/* Generated */                                 const float  inOpen[],
/* Generated */                                 const float  inHigh[],
/* Generated */                                 const float  inLow[],
/* Generated */                                 const float  inClose[],
/* Generated */                                 double        optInPenetration, /* From 0 to TA_REAL_MAX */
/* Generated */                                 int          *outBegIdx,
/* Generated */                                 int          *outNBElement,
/* Generated */                                 int           outInteger[] )
/* Generated */ #endif
/* Generated */ {
/* Generated */     double BodyShortPeriodTotal, BodyLongPeriodTotal, BodyShortPeriodTotal2;
/* Generated */     int i, outIdx, BodyShortTrailingIdx, BodyLongTrailingIdx, lookbackTotal;
/* Generated */  #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */     if( startIdx < 0 )
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */     if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */     #if !defined(_JAVA)
/* Generated */     if(!inOpen||!inHigh||!inLow||!inClose)
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */     if( optInPenetration == TA_REAL_DEFAULT )
/* Generated */        optInPenetration = 3.000000e-1;
/* Generated */     else if( (optInPenetration < 0.000000e+0) ||  (optInPenetration > 3.000000e+37) )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #if !defined(_JAVA)
/* Generated */     if( !outInteger )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */  #endif 
/* Generated */    lookbackTotal = LOOKBACK_CALL(CDLEVENINGSTAR)(optInPenetration);
/* Generated */    if( startIdx < lookbackTotal )
/* Generated */       startIdx = lookbackTotal;
/* Generated */    if( startIdx > endIdx )
/* Generated */    {
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */       return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    }
/* Generated */    BodyLongPeriodTotal = 0;
/* Generated */    BodyShortPeriodTotal = 0;
/* Generated */    BodyShortPeriodTotal2 = 0;
/* Generated */    BodyLongTrailingIdx = startIdx -2 - TA_CANDLEAVGPERIOD(BodyLong);
/* Generated */    BodyShortTrailingIdx = startIdx -1 - TA_CANDLEAVGPERIOD(BodyShort);
/* Generated */    i = BodyLongTrailingIdx;
/* Generated */    while( i < startIdx-2 ) {
/* Generated */         BodyLongPeriodTotal += TA_CANDLERANGE( BodyLong, i );
/* Generated */         i++;
/* Generated */    }
/* Generated */    i = BodyShortTrailingIdx;
/* Generated */    while( i < startIdx-1 ) {
/* Generated */         BodyShortPeriodTotal += TA_CANDLERANGE( BodyShort, i );
/* Generated */         BodyShortPeriodTotal2 += TA_CANDLERANGE( BodyShort, i+1 );
/* Generated */         i++;
/* Generated */    }
/* Generated */    i = startIdx;
/* Generated */ #ifdef TA_LIB_PRO
/* Generated */ #endif
/* Generated */    outIdx = 0;
/* Generated */    do
/* Generated */    {
/* Generated */ #ifdef TA_LIB_PRO
/* Generated */ #else
/* Generated */         if( TA_REALBODY(i-2) > TA_CANDLEAVERAGE( BodyLong, BodyLongPeriodTotal, i-2 ) &&         // 1st: long
/* Generated */             TA_CANDLECOLOR(i-2) == 1 &&                                                             //           white
/* Generated */             TA_REALBODY(i-1) <= TA_CANDLEAVERAGE( BodyShort, BodyShortPeriodTotal, i-1 ) &&      // 2nd: short
/* Generated */             TA_REALBODYGAPUP(i-1,i-2) &&                                                            //            gapping up
/* Generated */             TA_REALBODY(i) > TA_CANDLEAVERAGE( BodyShort, BodyShortPeriodTotal2, i ) &&          // 3rd: longer than short
/* Generated */             TA_CANDLECOLOR(i) == -1 &&                                                              //          black real body
/* Generated */             inClose[i] < inClose[i-2] - TA_REALBODY(i-2) * optInPenetration                         //               closing well within 1st rb
/* Generated */           )
/* Generated */             outInteger[outIdx++] = -100;
/* Generated */         else
/* Generated */             outInteger[outIdx++] = 0;
/* Generated */ #endif
/* Generated */         BodyLongPeriodTotal += TA_CANDLERANGE( BodyLong, i-2 ) - TA_CANDLERANGE( BodyLong, BodyLongTrailingIdx );
/* Generated */         BodyShortPeriodTotal += TA_CANDLERANGE( BodyShort, i-1 ) - TA_CANDLERANGE( BodyShort, BodyShortTrailingIdx );
/* Generated */         BodyShortPeriodTotal2 += TA_CANDLERANGE( BodyShort, i ) - TA_CANDLERANGE( BodyShort, BodyShortTrailingIdx+1 );
/* Generated */         i++; 
/* Generated */         BodyLongTrailingIdx++;
/* Generated */         BodyShortTrailingIdx++;
/* Generated */    } while( i <= endIdx );
/* Generated */    VALUE_HANDLE_DEREF(outNBElement) = outIdx;
/* Generated */    VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;
/* Generated */    return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */ }
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ }}} // Close namespace TicTacTec.TA.Lib
/* Generated */ #endif
/**** END GENCODE SECTION 11 - DO NOT DELETE THIS LINE ****/

