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
 *  DM       Drew McCormack (http://www.trade-strategist.com)
 *  MF       Mario Fortier
 *
 * Change history:
 *
 *  MMDDYY BY   Description
 *  -------------------------------------------------------------------
 *  281206 DM   Initial Implementation
 *  010606 MF   Abstract local arrays. Detect divide by zero.
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
/* Generated */ int Core::UltOscLookback( int           optInTimePeriod1, /* From 1 to 100000 */
/* Generated */                         int           optInTimePeriod2, /* From 1 to 100000 */
/* Generated */                         int           optInTimePeriod3 )  /* From 1 to 100000 */
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int ultOscLookback( int           optInTimePeriod1, /* From 1 to 100000 */
/* Generated */                          int           optInTimePeriod2, /* From 1 to 100000 */
/* Generated */                          int           optInTimePeriod3 )  /* From 1 to 100000 */
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_ULTOSC_Lookback( int           optInTimePeriod1, /* From 1 to 100000 */
/* Generated */                                             int           optInTimePeriod2, /* From 1 to 100000 */
/* Generated */                                             int           optInTimePeriod3 )  /* From 1 to 100000 */
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
{   
   /* insert local variable here */
   int maxPeriod;
/**** START GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */    /* min/max are checked for optInTimePeriod1. */
/* Generated */    if( (int)optInTimePeriod1 == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod1 = 7;
/* Generated */    else if( ((int)optInTimePeriod1 < 1) || ((int)optInTimePeriod1 > 100000) )
/* Generated */       return -1;
/* Generated */ 
/* Generated */    /* min/max are checked for optInTimePeriod2. */
/* Generated */    if( (int)optInTimePeriod2 == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod2 = 14;
/* Generated */    else if( ((int)optInTimePeriod2 < 1) || ((int)optInTimePeriod2 > 100000) )
/* Generated */       return -1;
/* Generated */ 
/* Generated */    /* min/max are checked for optInTimePeriod3. */
/* Generated */    if( (int)optInTimePeriod3 == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod3 = 28;
/* Generated */    else if( ((int)optInTimePeriod3 < 1) || ((int)optInTimePeriod3 > 100000) )
/* Generated */       return -1;
/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/**** END GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/

   /* Lookback for the Ultimate Oscillator is the lookback of the SMA with the longest
    * time period, plus 1 for the True Range.
    */
    maxPeriod = max( max(optInTimePeriod1, optInTimePeriod2), optInTimePeriod3);
    return LOOKBACK_CALL(SMA)( maxPeriod ) + 1;
}

/**** START GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
/*
 * TA_ULTOSC - Ultimate Oscillator
 * 
 * Input  = High, Low, Close
 * Output = double
 * 
 * Optional Parameters
 * -------------------
 * optInTimePeriod1:(From 1 to 100000)
 *    Number of bars for 1st period.
 * 
 * optInTimePeriod2:(From 1 to 100000)
 *    Number of bars fro 2nd period
 * 
 * optInTimePeriod3:(From 1 to 100000)
 *    Number of bars for 3rd period
 * 
 * 
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::UltOsc( int    startIdx,
/* Generated */                                        int    endIdx,
/* Generated */                                        SubArray<double>^ inHigh,
/* Generated */                                        SubArray<double>^ inLow,
/* Generated */                                        SubArray<double>^ inClose,
/* Generated */                                        int           optInTimePeriod1, /* From 1 to 100000 */
/* Generated */                                        int           optInTimePeriod2, /* From 1 to 100000 */
/* Generated */                                        int           optInTimePeriod3, /* From 1 to 100000 */
/* Generated */                                        [Out]int%    outBegIdx,
/* Generated */                                        [Out]int%    outNBElement,
/* Generated */                                        SubArray<double>^  outReal )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::UltOsc( int    startIdx,
/* Generated */                                        int    endIdx,
/* Generated */                                        cli::array<double>^ inHigh,
/* Generated */                                        cli::array<double>^ inLow,
/* Generated */                                        cli::array<double>^ inClose,
/* Generated */                                        int           optInTimePeriod1, /* From 1 to 100000 */
/* Generated */                                        int           optInTimePeriod2, /* From 1 to 100000 */
/* Generated */                                        int           optInTimePeriod3, /* From 1 to 100000 */
/* Generated */                                        [Out]int%    outBegIdx,
/* Generated */                                        [Out]int%    outNBElement,
/* Generated */                                        cli::array<double>^  outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode ultOsc( int    startIdx,
/* Generated */                        int    endIdx,
/* Generated */                        double       inHigh[],
/* Generated */                        double       inLow[],
/* Generated */                        double       inClose[],
/* Generated */                        int           optInTimePeriod1, /* From 1 to 100000 */
/* Generated */                        int           optInTimePeriod2, /* From 1 to 100000 */
/* Generated */                        int           optInTimePeriod3, /* From 1 to 100000 */
/* Generated */                        MInteger     outBegIdx,
/* Generated */                        MInteger     outNBElement,
/* Generated */                        double        outReal[] )
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_ULTOSC( int    startIdx,
/* Generated */                                  int    endIdx,
/* Generated */                                             const double inHigh[],
/* Generated */                                             const double inLow[],
/* Generated */                                             const double inClose[],
/* Generated */                                             int           optInTimePeriod1, /* From 1 to 100000 */
/* Generated */                                             int           optInTimePeriod2, /* From 1 to 100000 */
/* Generated */                                             int           optInTimePeriod3, /* From 1 to 100000 */
/* Generated */                                             int          *outBegIdx,
/* Generated */                                             int          *outNBElement,
/* Generated */                                             double        outReal[] )
/* Generated */ #endif
/**** END GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */
   double a1Total, a2Total, a3Total;
   double b1Total, b2Total, b3Total;
   double trueLow, trueRange, closeMinusTrueLow;
   double tempDouble, output, tempHT, tempLT, tempCY;
   int lookbackTotal;
   int longestPeriod, longestIndex;
   int i,j,today,outIdx;
   int trailingIdx1, trailingIdx2, trailingIdx3;

   ARRAY_INT_LOCAL(usedFlag,3);
   ARRAY_INT_LOCAL(periods,3);
   ARRAY_INT_LOCAL(sortedPeriods,3);

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
/* Generated */    if(!inHigh||!inLow||!inClose)
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    /* min/max are checked for optInTimePeriod1. */
/* Generated */    if( (int)optInTimePeriod1 == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod1 = 7;
/* Generated */    else if( ((int)optInTimePeriod1 < 1) || ((int)optInTimePeriod1 > 100000) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    /* min/max are checked for optInTimePeriod2. */
/* Generated */    if( (int)optInTimePeriod2 == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod2 = 14;
/* Generated */    else if( ((int)optInTimePeriod2 < 1) || ((int)optInTimePeriod2 > 100000) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    /* min/max are checked for optInTimePeriod3. */
/* Generated */    if( (int)optInTimePeriod3 == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod3 = 28;
/* Generated */    else if( ((int)optInTimePeriod3 < 1) || ((int)optInTimePeriod3 > 100000) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outReal )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/

   VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
   VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);

   /* Ensure that the time periods are ordered from shortest to longest.
    * Sort. */
   periods[0] = optInTimePeriod1;
   periods[1] = optInTimePeriod2;
   periods[2] = optInTimePeriod3;
   usedFlag[0] = 0;
   usedFlag[1] = 0;
   usedFlag[2] = 0;
   for ( i = 0; i < 3; ++i ) 
   {
      longestPeriod = 0;
      longestIndex = 0;
      for ( j = 0; j < 3; ++j ) 
      {
         if ( (usedFlag[j] == 0) && (periods[j] > longestPeriod) ) 
         {
            longestPeriod = periods[j];
            longestIndex = j;
          }
      }
      usedFlag[longestIndex] = 1;
      sortedPeriods[i] = longestPeriod;
   }
   optInTimePeriod1 = sortedPeriods[2];
   optInTimePeriod2 = sortedPeriods[1];
   optInTimePeriod3 = sortedPeriods[0];

   /* Adjust startIdx for lookback period. */
   lookbackTotal = LOOKBACK_CALL(ULTOSC)( optInTimePeriod1, optInTimePeriod2, optInTimePeriod3 );
   if( startIdx < lookbackTotal ) startIdx = lookbackTotal;
   
   /* Make sure there is still something to evaluate. */
   if( startIdx > endIdx ) return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
   
   /* Prime running totals used in moving averages */
   #define CALC_TERMS(day)                        \
   {                                              \
      tempLT = inLow[day];                        \
      tempHT = inHigh[day];                       \
      tempCY = inClose[day-1];                    \
      trueLow = min( tempLT, tempCY );            \
      closeMinusTrueLow = inClose[day] - trueLow; \
      trueRange = tempHT - tempLT;                \
      tempDouble = std_fabs( tempCY - tempHT );       \
      if( tempDouble > trueRange )                 \
         trueRange = tempDouble;                  \
      tempDouble = std_fabs( tempCY - tempLT  );      \
      if( tempDouble > trueRange )                 \
         trueRange = tempDouble;                  \
   }

   #define PRIME_TOTALS(aTotal, bTotal, period)                 \
   {                                                            \
      aTotal = 0;                                               \
      bTotal = 0;                                               \
      for ( i = startIdx-period+1; i < startIdx; ++i )          \
      {                                                         \
         CALC_TERMS(i);                                         \
         aTotal += closeMinusTrueLow;                           \
         bTotal += trueRange;                                   \
      }                                                         \
   }

   PRIME_TOTALS(a1Total, b1Total, optInTimePeriod1);
   PRIME_TOTALS(a2Total, b2Total, optInTimePeriod2);
   PRIME_TOTALS(a3Total, b3Total, optInTimePeriod3);

   #undef PRIME_TOTALS

   /* Calculate oscillator */
   today = startIdx;
   outIdx = 0;
   trailingIdx1 = today - optInTimePeriod1 + 1;
   trailingIdx2 = today - optInTimePeriod2 + 1;
   trailingIdx3 = today - optInTimePeriod3 + 1;
   while( today <= endIdx )
   { 
      /* Add on today's terms */
      CALC_TERMS(today);
      a1Total += closeMinusTrueLow;
      a2Total += closeMinusTrueLow;
      a3Total += closeMinusTrueLow;
      b1Total += trueRange;
      b2Total += trueRange;
      b3Total += trueRange;
      
      /* Calculate the oscillator value for today */
      output = 0.0; 
      
      if( !TA_IS_ZERO(b1Total) ) output += 4.0*(a1Total/b1Total);
      if( !TA_IS_ZERO(b2Total) ) output += 2.0*(a2Total/b2Total);
      if( !TA_IS_ZERO(b3Total) ) output += a3Total/b3Total; 
                  
      /* Remove the trailing terms to prepare for next day */
      CALC_TERMS(trailingIdx1);
      a1Total -= closeMinusTrueLow;
      b1Total -= trueRange;

      CALC_TERMS(trailingIdx2);
      a2Total -= closeMinusTrueLow;
      b2Total -= trueRange;
      
      CALC_TERMS(trailingIdx3);
      a3Total -= closeMinusTrueLow;
      b3Total -= trueRange;
      
      /* Last operation is to write the output. Must
       * be done after the trailing index have all been
       * taken care of because the caller is allowed
       * to have the input array to be also the output 
       * array.
       */
      outReal[outIdx] = 100.0 * (output / 7.0);

      /* Increment indexes */
      outIdx++;
      today++; 
      trailingIdx1++; 
      trailingIdx2++; 
      trailingIdx3++;
   }
   #undef CALC_TERMS
   
   /* All done. Indicate the output limits and return. */
   VALUE_HANDLE_DEREF(outNBElement) = outIdx;
   VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;

   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::UltOscStateInit( struct TA_UltOsc_State** _state,
/* Generated */                          int           optInTimePeriod1, /* From 1 to 100000 */
/* Generated */                          int           optInTimePeriod2, /* From 1 to 100000 */
/* Generated */                          int           optInTimePeriod3 )  /* From 1 to 100000 */
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int ultOscStateInit( struct TA_ultOsc_State** _state,
/* Generated */                           int           optInTimePeriod1, /* From 1 to 100000 */
/* Generated */                           int           optInTimePeriod2, /* From 1 to 100000 */
/* Generated */                           int           optInTimePeriod3 )  /* From 1 to 100000 */
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_ULTOSC_StateInit( struct TA_ULTOSC_State** _state,
/* Generated */                                              int           optInTimePeriod1, /* From 1 to 100000 */
/* Generated */                                              int           optInTimePeriod2, /* From 1 to 100000 */
/* Generated */                                              int           optInTimePeriod3 )  /* From 1 to 100000 */
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
/* Generated */    /* min/max are checked for optInTimePeriod1. */
/* Generated */    if( (int)optInTimePeriod1 == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod1 = 7;
/* Generated */    else if( ((int)optInTimePeriod1 < 1) || ((int)optInTimePeriod1 > 100000) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    /* min/max are checked for optInTimePeriod2. */
/* Generated */    if( (int)optInTimePeriod2 == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod2 = 14;
/* Generated */    else if( ((int)optInTimePeriod2 < 1) || ((int)optInTimePeriod2 > 100000) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    /* min/max are checked for optInTimePeriod3. */
/* Generated */    if( (int)optInTimePeriod3 == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod3 = 28;
/* Generated */    else if( ((int)optInTimePeriod3 < 1) || ((int)optInTimePeriod3 > 100000) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    STATE = calloc(1, sizeof(struct TA_ULTOSC_State));
/* Generated */    STATE_P.mem_index = 0;
/* Generated */    STATE_P.optInTimePeriod1 = optInTimePeriod1;
/* Generated */    STATE_P.optInTimePeriod2 = optInTimePeriod2;
/* Generated */    STATE_P.optInTimePeriod3 = optInTimePeriod3;
/* Generated */    MEM_SIZE_P = TA_ULTOSC_Lookback(optInTimePeriod1, optInTimePeriod2, optInTimePeriod3 );
/* Generated */    #ifndef TA_ULTOSC_SUPPRESS_MEMORY_ALLOCATION
/* Generated */    if (MEM_SIZE_P > 0)
/* Generated */          MEM_P = calloc(MEM_SIZE_P, sizeof(struct TA_ULTOSC_Data));
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
/* Generated */ int Core::UltOscState( struct TA_UltOsc_State* _state,
/* Generated */                      cli::array<double>^ inHigh,
/* Generated */                      cli::array<double>^ inLow,
/* Generated */                      cli::array<double>^ inClose,
/* Generated */                      cli::array<double>^  *outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int ultOscState( struct TA_ultOsc_State* _state,
/* Generated */                       double       inHigh,
/* Generated */                       double       inLow,
/* Generated */                       double       inClose,
/* Generated */                       double        *outReal )
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_ULTOSC_State( struct TA_ULTOSC_State* _state,
/* Generated */                                          const double inHigh,
/* Generated */                                          const double inLow,
/* Generated */                                          const double inClose,
/* Generated */                                          double        *outReal )
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
/* Generated */    if(!inHigh||!inLow||!inClose)
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    size_t _cur_idx = STATE.mem_index++;
/* Generated */    if (MEM_SIZE > 0) _cur_idx %= MEM_SIZE;
/* Generated */    UNUSED_VARIABLE(_cur_idx); // in case PUSH\POP methods won't be used
/* Generated */    #ifndef TA_ULTOSC_SUPPRESS_EXIT_ON_NOT_ENOUGH_DATA
/* Generated */    if (NEED_MORE_DATA) {
/* Generated */          PUSH_TO_MEM(inHigh,inHigh);
/* Generated */          PUSH_TO_MEM(inLow,inLow);
/* Generated */          PUSH_TO_MEM(inClose,inClose);
/* Generated */    return ENUM_VALUE(RetCode,TA_NEED_MORE_DATA,NeedMoreData); }
/* Generated */    #endif
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outReal )
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
/* Generated */ int Core::UltOscStateFree( struct TA_UltOsc_State** _state )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int ultOscStateFree( struct TA_ultOsc_State** _state )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_ULTOSC_StateFree( struct TA_ULTOSC_State** _state )
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
/* Generated */ enum class Core::RetCode Core::UltOsc( int    startIdx,
/* Generated */                                        int    endIdx,
/* Generated */                                        SubArray<float>^ inHigh,
/* Generated */                                        SubArray<float>^ inLow,
/* Generated */                                        SubArray<float>^ inClose,
/* Generated */                                        int           optInTimePeriod1, /* From 1 to 100000 */
/* Generated */                                        int           optInTimePeriod2, /* From 1 to 100000 */
/* Generated */                                        int           optInTimePeriod3, /* From 1 to 100000 */
/* Generated */                                        [Out]int%    outBegIdx,
/* Generated */                                        [Out]int%    outNBElement,
/* Generated */                                        SubArray<double>^  outReal )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::UltOsc( int    startIdx,
/* Generated */                                        int    endIdx,
/* Generated */                                        cli::array<float>^ inHigh,
/* Generated */                                        cli::array<float>^ inLow,
/* Generated */                                        cli::array<float>^ inClose,
/* Generated */                                        int           optInTimePeriod1, /* From 1 to 100000 */
/* Generated */                                        int           optInTimePeriod2, /* From 1 to 100000 */
/* Generated */                                        int           optInTimePeriod3, /* From 1 to 100000 */
/* Generated */                                        [Out]int%    outBegIdx,
/* Generated */                                        [Out]int%    outNBElement,
/* Generated */                                        cli::array<double>^  outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode ultOsc( int    startIdx,
/* Generated */                        int    endIdx,
/* Generated */                        float        inHigh[],
/* Generated */                        float        inLow[],
/* Generated */                        float        inClose[],
/* Generated */                        int           optInTimePeriod1, /* From 1 to 100000 */
/* Generated */                        int           optInTimePeriod2, /* From 1 to 100000 */
/* Generated */                        int           optInTimePeriod3, /* From 1 to 100000 */
/* Generated */                        MInteger     outBegIdx,
/* Generated */                        MInteger     outNBElement,
/* Generated */                        double        outReal[] )
/* Generated */ #else
/* Generated */ TA_RetCode TA_S_ULTOSC( int    startIdx,
/* Generated */                         int    endIdx,
/* Generated */                         const float  inHigh[],
/* Generated */                         const float  inLow[],
/* Generated */                         const float  inClose[],
/* Generated */                         int           optInTimePeriod1, /* From 1 to 100000 */
/* Generated */                         int           optInTimePeriod2, /* From 1 to 100000 */
/* Generated */                         int           optInTimePeriod3, /* From 1 to 100000 */
/* Generated */                         int          *outBegIdx,
/* Generated */                         int          *outNBElement,
/* Generated */                         double        outReal[] )
/* Generated */ #endif
/* Generated */ {
/* Generated */    double a1Total, a2Total, a3Total;
/* Generated */    double b1Total, b2Total, b3Total;
/* Generated */    double trueLow, trueRange, closeMinusTrueLow;
/* Generated */    double tempDouble, output, tempHT, tempLT, tempCY;
/* Generated */    int lookbackTotal;
/* Generated */    int longestPeriod, longestIndex;
/* Generated */    int i,j,today,outIdx;
/* Generated */    int trailingIdx1, trailingIdx2, trailingIdx3;
/* Generated */    ARRAY_INT_LOCAL(usedFlag,3);
/* Generated */    ARRAY_INT_LOCAL(periods,3);
/* Generated */    ARRAY_INT_LOCAL(sortedPeriods,3);
/* Generated */  #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */     if( startIdx < 0 )
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */     if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */     #if !defined(_JAVA)
/* Generated */     if(!inHigh||!inLow||!inClose)
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */     if( (int)optInTimePeriod1 == TA_INTEGER_DEFAULT )
/* Generated */        optInTimePeriod1 = 7;
/* Generated */     else if( ((int)optInTimePeriod1 < 1) || ((int)optInTimePeriod1 > 100000) )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     if( (int)optInTimePeriod2 == TA_INTEGER_DEFAULT )
/* Generated */        optInTimePeriod2 = 14;
/* Generated */     else if( ((int)optInTimePeriod2 < 1) || ((int)optInTimePeriod2 > 100000) )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     if( (int)optInTimePeriod3 == TA_INTEGER_DEFAULT )
/* Generated */        optInTimePeriod3 = 28;
/* Generated */     else if( ((int)optInTimePeriod3 < 1) || ((int)optInTimePeriod3 > 100000) )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #if !defined(_JAVA)
/* Generated */     if( !outReal )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */  #endif 
/* Generated */    VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */    VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */    periods[0] = optInTimePeriod1;
/* Generated */    periods[1] = optInTimePeriod2;
/* Generated */    periods[2] = optInTimePeriod3;
/* Generated */    usedFlag[0] = 0;
/* Generated */    usedFlag[1] = 0;
/* Generated */    usedFlag[2] = 0;
/* Generated */    for ( i = 0; i < 3; ++i ) 
/* Generated */    {
/* Generated */       longestPeriod = 0;
/* Generated */       longestIndex = 0;
/* Generated */       for ( j = 0; j < 3; ++j ) 
/* Generated */       {
/* Generated */          if ( (usedFlag[j] == 0) && (periods[j] > longestPeriod) ) 
/* Generated */          {
/* Generated */             longestPeriod = periods[j];
/* Generated */             longestIndex = j;
/* Generated */           }
/* Generated */       }
/* Generated */       usedFlag[longestIndex] = 1;
/* Generated */       sortedPeriods[i] = longestPeriod;
/* Generated */    }
/* Generated */    optInTimePeriod1 = sortedPeriods[2];
/* Generated */    optInTimePeriod2 = sortedPeriods[1];
/* Generated */    optInTimePeriod3 = sortedPeriods[0];
/* Generated */    lookbackTotal = LOOKBACK_CALL(ULTOSC)( optInTimePeriod1, optInTimePeriod2, optInTimePeriod3 );
/* Generated */    if( startIdx < lookbackTotal ) startIdx = lookbackTotal;
/* Generated */    if( startIdx > endIdx ) return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    #define CALC_TERMS(day)                        \
/* Generated */    {                                              \
/* Generated */       tempLT = inLow[day];                        \
/* Generated */       tempHT = inHigh[day];                       \
/* Generated */       tempCY = inClose[day-1];                    \
/* Generated */       trueLow = min( tempLT, tempCY );            \
/* Generated */       closeMinusTrueLow = inClose[day] - trueLow; \
/* Generated */       trueRange = tempHT - tempLT;                \
/* Generated */       tempDouble = std_fabs( tempCY - tempHT );       \
/* Generated */       if( tempDouble > trueRange )                 \
/* Generated */          trueRange = tempDouble;                  \
/* Generated */       tempDouble = std_fabs( tempCY - tempLT  );      \
/* Generated */       if( tempDouble > trueRange )                 \
/* Generated */          trueRange = tempDouble;                  \
/* Generated */    }
/* Generated */    #define PRIME_TOTALS(aTotal, bTotal, period)                 \
/* Generated */    {                                                            \
/* Generated */       aTotal = 0;                                               \
/* Generated */       bTotal = 0;                                               \
/* Generated */       for ( i = startIdx-period+1; i < startIdx; ++i )          \
/* Generated */       {                                                         \
/* Generated */          CALC_TERMS(i);                                         \
/* Generated */          aTotal += closeMinusTrueLow;                           \
/* Generated */          bTotal += trueRange;                                   \
/* Generated */       }                                                         \
/* Generated */    }
/* Generated */    PRIME_TOTALS(a1Total, b1Total, optInTimePeriod1);
/* Generated */    PRIME_TOTALS(a2Total, b2Total, optInTimePeriod2);
/* Generated */    PRIME_TOTALS(a3Total, b3Total, optInTimePeriod3);
/* Generated */    #undef PRIME_TOTALS
/* Generated */    today = startIdx;
/* Generated */    outIdx = 0;
/* Generated */    trailingIdx1 = today - optInTimePeriod1 + 1;
/* Generated */    trailingIdx2 = today - optInTimePeriod2 + 1;
/* Generated */    trailingIdx3 = today - optInTimePeriod3 + 1;
/* Generated */    while( today <= endIdx )
/* Generated */    { 
/* Generated */       CALC_TERMS(today);
/* Generated */       a1Total += closeMinusTrueLow;
/* Generated */       a2Total += closeMinusTrueLow;
/* Generated */       a3Total += closeMinusTrueLow;
/* Generated */       b1Total += trueRange;
/* Generated */       b2Total += trueRange;
/* Generated */       b3Total += trueRange;
/* Generated */       output = 0.0; 
/* Generated */       if( !TA_IS_ZERO(b1Total) ) output += 4.0*(a1Total/b1Total);
/* Generated */       if( !TA_IS_ZERO(b2Total) ) output += 2.0*(a2Total/b2Total);
/* Generated */       if( !TA_IS_ZERO(b3Total) ) output += a3Total/b3Total; 
/* Generated */       CALC_TERMS(trailingIdx1);
/* Generated */       a1Total -= closeMinusTrueLow;
/* Generated */       b1Total -= trueRange;
/* Generated */       CALC_TERMS(trailingIdx2);
/* Generated */       a2Total -= closeMinusTrueLow;
/* Generated */       b2Total -= trueRange;
/* Generated */       CALC_TERMS(trailingIdx3);
/* Generated */       a3Total -= closeMinusTrueLow;
/* Generated */       b3Total -= trueRange;
/* Generated */       outReal[outIdx] = 100.0 * (output / 7.0);
/* Generated */       outIdx++;
/* Generated */       today++; 
/* Generated */       trailingIdx1++; 
/* Generated */       trailingIdx2++; 
/* Generated */       trailingIdx3++;
/* Generated */    }
/* Generated */    #undef CALC_TERMS
/* Generated */    VALUE_HANDLE_DEREF(outNBElement) = outIdx;
/* Generated */    VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;
/* Generated */    return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */ }
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ }}} // Close namespace TicTacTec.TA.Lib
/* Generated */ #endif
/**** END GENCODE SECTION 11 - DO NOT DELETE THIS LINE ****/

