/*!
 *  @mainpage DHWR APIs Document
 *
 *  @section intro_sec Introduction
 *  �� ������ (��)������� �ʱ��ν� �ַ���� DioPen�� �νĿ���(DHWR)�� API ���̵��̴�. \n
 *  DHWR�� ǥ�� C��� ����� ���̺귯���� ��ġ ��ũ���� ����� �Ӻ���� �÷����� ����ǰ� �ִ�.
 *
 *  @section install_sec Setting
 *  @subsection event_sec Touch Event
 *  �ʱ� �Է±� ������ ���ؼ��� ������ ���� ��ġ �̺�Ʈ ����� �䱸�ȴ�. \n
 *    - Touch Down : ���� ��ġ ����̽��� ó�� ��� ���� �߻��ϴ� �̺�Ʈ. \n
 *    - Touch Move : ���� ��ġ ����̽����� ���� ���� ���·� ���� ��� �߻��ϴ� �̺�Ʈ. \n
 *    - Touch Up : ���� ��ġ ����̽� �󿡼� ���� ���� �߻��ϴ� �̺�Ʈ. Touch Down�� �߻��� ����� �׻� Touch Up�� �߻��Ͽ��� �Ѵ�. ��, ����ڰ� �ʱ� ���� ��ġ �е� ������ ��� ��쿡�� ����̹������� Touch Up �̺�Ʈ�� �߻� ���Ѿ� �Ѵ�.
 *
 *  @subsection samplingrate_sec Sampling Rate
 *  'Sampling Rate���� ��ġ ����̽����� ��ġ �̺�Ʈ�� üũ�ϴ� �ð�(or ��)�� ���Ѵ�. \n
 *  �ʱ� �Է±� ������ ���ؼ��� ���� 10~40mSec(�ʴ� 25~100���� ��ġ�̺�Ʈ) ������ �����Ѵ�. \n
 *  ������ ���� Sampling Rate�� 40mSec�� �Ѱ� �Ǹ� �ʱ��� ����� �ڿ������� ���ϰ� �νķ��� �������� �ȴ�. �밳�� ��� 10~20mSec�� �����Ѵ�.
 *
 *  @subsection delaytime_sec Delay time
 *  �ν� ��� �ð��� �ʱ� �Է��� �����ٰ� �Ǵ��ϴµ� �ɸ��� �ð��̴�. \n
 *  ��, ��ġ ����̽����� ���� �� �� ���� �ð� ���� �ʱ� �Է��� ������ ������� �Է��� �����ٰ� �Ǵ��ϰ� �ν� ������ ȣ���ϰ� �ȴ�. \n
 *  �ν� ��� �ð��� ���� �޴��� �ξ� ����ڷ� �Ͽ� ������ ���� ������ �� �ֵ��� �� ���� ������, �Ϲ������� 300~500mSec�� ���� ����Ѵ�. \n
 *  �ν� ��� ���ڸ� �����ϴ� ��� ��� ������ ������ ���� ���� ������ ���� �ִ�.(��, �ѱ� - 400mSec, ������ - 200mSec) \n
 *  ����, �ν� ��� �ð��� Ȱ������ �ʰ� Ư�� ��ư�� �ξ� �ð��� ������� ��ư�� Ŭ���ϸ� �ٷ� �ν� ������ ȣ���ϰԲ� ������ ���� �ִ�.
 *
 *  @section porting_sec Porting
 *  ���ÿ� �ʿ��� ���ϵ��� ������ ����. \n
 *    - dhwr.h - main API function ���� ����Ǿ� �ִ�. \n
 *    - dhwr_define.h - ���� definition \n
 *    - dhwr_gesture.h - gesture ���� definition \n
 *    - dhwr_ink.h - ink ���� definition \n
 *    - dhwr_result.h - result ���� definition \n
 *    - dhwr_setting.h - setting ���� definition \n
 *    - dhwr.a (libdhwr.so) - �νĿ��� ���̺귯���� App.�� �ν� �������� �������̽��� ���� ���̺귯���̴�. \n
 *
 *  @section link_sec Link
 *  (��)����� http://www.diotek.co.kr
 */

/*!
 *  @file  dhwr.h
 *  @date  2011/10/12
 *  @author  shchoi
 *
 *  Copyright (c) 2011 by DIOTEK Co.,LTD. All rights reserved.
 */

/*! 
 *  @example example.c
 *  DHWR API���� �̿��Ͽ� �ʱ��νı⸦ �����ϴ� ����
 */

#ifndef __DHWR_H__
#define __DHWR_H__

#include "dhwr_define.h"
#include "dhwr_gesture.h"
#include "dhwr_ink.h"
#include "dhwr_result.h"
#include "dhwr_setting.h"

#ifdef __cplusplus
extern "C" {
#endif

/*!
 *  @brief ���� ���� ���� �ڵ� ��
 */
typedef enum {
  //! ����
  ERR_SUCCESS        = 0,
  //! �νİ���� ����
  ERR_NORESULT,
  //! Null Pointer�� ������
  ERR_NULL_POINTER,
  //! memory access ������ ��� fatal error
  ERR_OUTOFMEMORY,
  //! value or size ������ ��� exception
  ERR_OUTOFRANGE,
  //! �Էµ� �����Ͱ� ����
  ERR_EMPTY_INK,
  //! �Էµ� ���ڰ� �߸���
  ERR_INVALID_ARGUMENTS,
  //! ������ �νĸ��� ����������
  ERR_INVALID_MODEL,
  //! ������ ���������� ����������
  ERR_INVALID_DICTIONARY,
  //! �߸��� ��ü�� ����
  ERR_INVALID_INSTANCE,
  //! ���� �Ⱓ/Ƚ�� ����
  ERR_EXPIRE_DEMO,
  //! �������� �ʴ� ���
  ERR_UNSUPPORTED_MODE,
  //! ������ ���� ��
  ERR_ENGINE_BUSY,
  //! ���� ����
  ERR_AUTHORIZATION_FAIL
} DHWR_ERROR_CODE;

/* ----------------------------------------------------------------------
 * Functions
 * All functions return combination of DHWR_ERROR_CODE flags
 * -------------------------------------------------------------------- */

/**
 * @defgroup  Main Main APIs
 * @brief     ���� ��뿡 �ʼ����� �Լ�
 */

/*@{*/

/*!
 *  @brief �νĿ��� ������ ������
 *  @return DHWR_ERROR_CODE: �Լ��� ���� ����� ���� ���� �ڵ�
 */
DHWR_API unsigned long DHWRCreate(void);

/*!
 *  @brief �νĸ�� �Ӽ� ���� ���� �Է� �����͸� �ν���
 *  @param [in] setting ������ �Ϸ�� Setting Object
 *  @see DHWRSettingObject
 *  @return DHWR_ERROR_CODE
 */
DHWR_API unsigned int DHWRSetAttribute(DHWRSettingObject setting);

/*!
 *  @brief �νĸ�� �Ӽ� ���� ���� �Է� �����͸� �ν���
 *  @param [in] ink ��ǥ�� �Էµ� Ink Object
 *  @param [out] context �νĵ� ����� ����� Result Object
 *  @remarks DHWRInkObject, DHWRResultObject
 *  @return DHWR_ERROR_CODE
 */
DHWR_API unsigned long DHWRecognize(DHWRInkObject ink, DHWRResultObject context);

/*!
 *  @brief �νĿ��� ������ ��ħ
 *  @return DHWR_ERROR_CODE
 */
DHWR_API unsigned long DHWRClose(void);

/*@}*/

/**
 * @defgroup Option Optional APIs
 */

/*!
*  @brief  �������ο��� ����ϴ� �ܺθ��ҽ�(���� ���� ��)�� Ȯ���Ͽ� �νİ����� ��� ����Ʈ ����
*  @param [out] list ��� ���۷� �޸� �Ҵ� �� ������ ���� ���ο��� ������
*  @returns  unsigned long
*/
DHWR_API unsigned int DHWRAvailableLanguageList(const unsigned short ** list, int* size);

/*!
*  @brief  �������ο��� ����ϴ� �ܺθ��ҽ�(���� ���� ��)�� ��� ����
*  @param [in] path ���ҽ� ���
*  @returns  unsigned long
*/
DHWR_API unsigned long DHWRSetExternalResourcePath(const char* path);

/*!
* @brief  �������ο��� ����ϴ� �ܺζ��̺귯���� ��� ����
* @returns  unsigned long
*/
DHWR_API unsigned long DHWRSetExternalLibraryPath(const char* path);

/*!
 *  @brief Ư�� Ÿ���� �Ķ���� ���� ������
 *  @param [in] type �Ķ���� Ÿ��
 *  @param [in] param Ư�� �ĸ����� Ÿ���� ������
 *  @return DHWR_ERROR_CODE
 */
DHWR_API unsigned long DHWRGetParam(const unsigned long type, void * param);

/*!
 *  @brief Ư�� Ÿ���� �Ķ���� ���� ������
 *  @param [in] type �Ķ���� Ÿ��
 *  @param [in] param Ư�� �ĸ����� Ÿ���� ������
 *  @return DHWR_ERROR_CODE
 */
DHWR_API unsigned long DHWRSetParam(const unsigned long type, const void * param);

/*!
 *  @brief ������ ����ѹ��� ������
 *  @param [out] revision ���� ����ѹ�
 *  @return DHWR_ERROR_CODE
 */
DHWR_API unsigned long DHWRGetRevision(char ** revision);

/*!
 *  @brief ������ user character set�� ����
 *  @param [in] code_set �νĴ�� ���� �迭
 *  @param [in] code_count code_set�� ������ �� �ν� ��� ���� ����
 *  @remarks code_count�� 50 ���Ϸ� ����
 *  @remarks DLANG_KOREAN �̸鼭 DTYPE_VOWEL ���� �ٸ� ���(DTYPE_WANSUNG �Ǵ� DTYPE_JOHAP)�� ȥ���� ���� ����
 *  @return DHWR_ERROR_CODE
 */
DHWR_API unsigned long DHWRSetUserVowelCharSet(unsigned short * code_set,
  int code_count);

/*!
 *  @brief ������ user character set�� ����
  *  @return DHWR_ERROR_CODE
 */
DHWR_API unsigned long DHWRFreeUserVowelCharSet(void);

/*!
 *  @brief �Է� �����͸� �ܺ� ���ۿ� ���� ���� �� ���� �Է���
 *  @param [in] ink_buff ��ũ ����ü ����
 *  @param [in] points ��ũ�� ���� ����
 *  @return DHWR_ERROR_CODE
 */
DHWR_API unsigned long DHWRSetInkBuff(unsigned char * ink_buff, int points);

/*@}*/

#ifdef __cplusplus
}
#endif

#endif  // __DHWR_H__
