/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "mock_lcd.h"

static const char* CMockString_lcd_display = "lcd_display";
static const char* CMockString_lcd_initialize = "lcd_initialize";
static const char* CMockString_str = "str";

typedef struct _CMOCK_lcd_initialize_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  CMOCK_ARG_MODE IgnoreMode;
  _Bool ReturnVal;

} CMOCK_lcd_initialize_CALL_INSTANCE;

typedef struct _CMOCK_lcd_display_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  CMOCK_ARG_MODE IgnoreMode;
  int ReturnVal;
  char* Expected_str;
  int IgnoreArg_str;

} CMOCK_lcd_display_CALL_INSTANCE;

static struct mock_lcdInstance
{
  int lcd_initialize_IgnoreBool;
  _Bool lcd_initialize_FinalReturn;
  CMOCK_MEM_INDEX_TYPE lcd_initialize_CallInstance;
  int lcd_display_IgnoreBool;
  int lcd_display_FinalReturn;
  CMOCK_MEM_INDEX_TYPE lcd_display_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void mock_lcd_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.lcd_initialize_IgnoreBool)
    Mock.lcd_initialize_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_lcd_initialize);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.lcd_initialize_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.lcd_display_IgnoreBool)
    Mock.lcd_display_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_lcd_display);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.lcd_display_CallInstance, cmock_line, CMockStringCalledLess);
}

void mock_lcd_Init(void)
{
  mock_lcd_Destroy();
}

void mock_lcd_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
}

_Bool lcd_initialize(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_lcd_initialize_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_lcd_initialize);
  cmock_call_instance = (CMOCK_lcd_initialize_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.lcd_initialize_CallInstance);
  Mock.lcd_initialize_CallInstance = CMock_Guts_MemNext(Mock.lcd_initialize_CallInstance);
  if (Mock.lcd_initialize_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.lcd_initialize_FinalReturn;
    memcpy(&Mock.lcd_initialize_FinalReturn, &cmock_call_instance->ReturnVal, sizeof(_Bool));
    return cmock_call_instance->ReturnVal;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void lcd_initialize_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, _Bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_lcd_initialize_CALL_INSTANCE));
  CMOCK_lcd_initialize_CALL_INSTANCE* cmock_call_instance = (CMOCK_lcd_initialize_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.lcd_initialize_CallInstance = CMock_Guts_MemChain(Mock.lcd_initialize_CallInstance, cmock_guts_index);
  Mock.lcd_initialize_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->IgnoreMode = CMOCK_ARG_ALL;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.lcd_initialize_IgnoreBool = (int)1;
}

void lcd_initialize_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, _Bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_lcd_initialize_CALL_INSTANCE));
  CMOCK_lcd_initialize_CALL_INSTANCE* cmock_call_instance = (CMOCK_lcd_initialize_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.lcd_initialize_CallInstance = CMock_Guts_MemChain(Mock.lcd_initialize_CallInstance, cmock_guts_index);
  Mock.lcd_initialize_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->IgnoreMode = CMOCK_ARG_ALL;
  cmock_call_instance->ReturnVal = cmock_to_return;
  cmock_call_instance->IgnoreMode = CMOCK_ARG_NONE;
}

void lcd_initialize_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, _Bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_lcd_initialize_CALL_INSTANCE));
  CMOCK_lcd_initialize_CALL_INSTANCE* cmock_call_instance = (CMOCK_lcd_initialize_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.lcd_initialize_CallInstance = CMock_Guts_MemChain(Mock.lcd_initialize_CallInstance, cmock_guts_index);
  Mock.lcd_initialize_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->IgnoreMode = CMOCK_ARG_ALL;
  memcpy(&cmock_call_instance->ReturnVal, &cmock_to_return, sizeof(_Bool));
  UNITY_CLR_DETAILS();
}

int lcd_display(const char* str)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_lcd_display_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_lcd_display);
  cmock_call_instance = (CMOCK_lcd_display_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.lcd_display_CallInstance);
  Mock.lcd_display_CallInstance = CMock_Guts_MemNext(Mock.lcd_display_CallInstance);
  if (Mock.lcd_display_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.lcd_display_FinalReturn;
    Mock.lcd_display_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->IgnoreMode != CMOCK_ARG_NONE)
  {
  if (!cmock_call_instance->IgnoreArg_str)
  {
    UNITY_SET_DETAILS(CMockString_lcd_display,CMockString_str);
    UNITY_TEST_ASSERT_EQUAL_STRING(cmock_call_instance->Expected_str, str, cmock_line, CMockStringMismatch);
  }
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_lcd_display(CMOCK_lcd_display_CALL_INSTANCE* cmock_call_instance, const char* str)
{
  cmock_call_instance->Expected_str = (char*)str;
  cmock_call_instance->IgnoreArg_str = 0;
}

void lcd_display_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_lcd_display_CALL_INSTANCE));
  CMOCK_lcd_display_CALL_INSTANCE* cmock_call_instance = (CMOCK_lcd_display_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.lcd_display_CallInstance = CMock_Guts_MemChain(Mock.lcd_display_CallInstance, cmock_guts_index);
  Mock.lcd_display_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->IgnoreMode = CMOCK_ARG_ALL;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.lcd_display_IgnoreBool = (int)1;
}

void lcd_display_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_lcd_display_CALL_INSTANCE));
  CMOCK_lcd_display_CALL_INSTANCE* cmock_call_instance = (CMOCK_lcd_display_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.lcd_display_CallInstance = CMock_Guts_MemChain(Mock.lcd_display_CallInstance, cmock_guts_index);
  Mock.lcd_display_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->IgnoreMode = CMOCK_ARG_ALL;
  cmock_call_instance->ReturnVal = cmock_to_return;
  cmock_call_instance->IgnoreMode = CMOCK_ARG_NONE;
}

void lcd_display_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, const char* str, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_lcd_display_CALL_INSTANCE));
  CMOCK_lcd_display_CALL_INSTANCE* cmock_call_instance = (CMOCK_lcd_display_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.lcd_display_CallInstance = CMock_Guts_MemChain(Mock.lcd_display_CallInstance, cmock_guts_index);
  Mock.lcd_display_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->IgnoreMode = CMOCK_ARG_ALL;
  CMockExpectParameters_lcd_display(cmock_call_instance, str);
  cmock_call_instance->ReturnVal = cmock_to_return;
  UNITY_CLR_DETAILS();
}

void lcd_display_CMockIgnoreArg_str(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_lcd_display_CALL_INSTANCE* cmock_call_instance = (CMOCK_lcd_display_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.lcd_display_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_str = 1;
}
