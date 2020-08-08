/*!
 *      @date   2011/09/08
 *      @file   dhwr_result.h
 *      @author shchoi
 *
 *      Copyright (c) 2011 by DIOTEK Co.,LTD. All rights reserved.
 */

#ifndef __DHWR_RESULT_OBJECT_H__
#define __DHWR_RESULT_OBJECT_H__ 1

#include "dhwr_define.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup ResultObject ResultObject APIs
 * @ingroup  Main
 * @brief    �νĵ� ����� �����ϴ� ResultObject ���� �Լ�
 */

/*@{*/

//! Object Handle
typedef const void* DHWRResultObject;
//! Line Handle
typedef const void* DHWRResultLine;
//! Block Handle 
typedef const void* DHWRResultBlock;

//! ���� �νĵ� ����
typedef enum {
  //! �ϼ����� �ʾ���
  kNoneComplete = 0,
  //! ���ڰ� �ϼ� �Ǿ���
  kCharacterComplete,
  //! �ܾ �ϼ� �Ǿ���
  kWordComplete
} DHWRCompleteType;

//!  ���� ������ ����
typedef struct tagDHWRBlockInfo {
  /*! 
   *  @brief �ϼ� ����
   *  @see DHWRCompleteType 
   */
  int complete;
  //! Stroke�� index(Zero base)
  int stroke;
  //! �ν� ����
  int score;
} DHWRBlockInfo;

/*!
 *  @brief ��� ������Ʈ�� �����Ѵ�
 *  @return DHWRResultObject
 */
DHWR_API DHWRResultObject DHWRCreateResultObject(void);

/*!
 *  @brief ��� ������Ʈ�� �����Ѵ�
 *  @param [in] result ��� ������Ʈ
 *  @return void
 */
DHWR_API void DHWRDestroyResultObject(DHWRResultObject result);

/*!
 *  @brief ��� ���� ���� ũ�⸦ �����´�
 *  @param [in] result ��� ������Ʈ
 *  @return Line Size
 */
DHWR_API unsigned int DHWRGetLineSize(DHWRResultObject result);

/*!
 *  @brief ������ �ε����� ���� ����� �����´�
 *  @param [in] result ��� ������Ʈ
 *  @param [in] index ���� �ε���
 *  @return DHWRResultLine
 */
DHWR_API DHWRResultLine DHWRGetLine(DHWRResultObject result, const unsigned int index);

/*!
 *  @brief ���� ��� ���� �� ũ�⸦ �����´�
 *  @param [in] line ���� ��� ��
 *  @return Block Size
 */
DHWR_API unsigned int DHWRGetBlockSize(DHWRResultLine line);

/*!
 *  @brief ���� ������� ������ �ε����� �� ����� �����´�
 *  @param [in] line ����
 *  @param [in] index �� �ε���
 *  @return DHWRResultBlock
 */
DHWR_API DHWRResultBlock DHWRGetBlock(DHWRResultLine line, const unsigned int index);

/*!
 *  @brief �� ������� ������ ���´� (�ϼ�����, ó���� ȹ �ε���, �ν� ����)
 *  @param [in] block �� ��� ��
 *  @param [out] info ������
 *  @return DHWR_ERROR_CODE
 */
DHWR_API unsigned int DHWRGetBlockInfo(DHWRResultBlock block, DHWRBlockInfo* info);

/*!
 *  @brief �� ��� ������ �ĺ� ũ�⸦ �����´�.
 *  @param [in] block �� ��� ��
 *  @return Candidate Size
 */
DHWR_API unsigned int DHWRGetCandidateSize(DHWRResultBlock block);

/*!
 *  @brief �� ��� ������ �ν� �ĺ��� �����´�.
 *  @param [in] block �� ��� ��
 *  @param [in] index �ĺ� �ε���
 *  @param [out] length �ν��ĺ� ���ڿ� ũ��
 *  @return �ν� �ĺ� ���ڿ�
 */
DHWR_API const unsigned short* DHWRGetCandidate(DHWRResultBlock block,
  const unsigned int index, unsigned int* length);

/*@}*/

#ifdef __cplusplus
}
#endif

#endif // __DHWR_RESULT_OBJECT_H__
