/*!
 *      @date   2011/09/08
 *      @file   dhwr_ink.h
 *      @author shchoi
 *
 *      Copyright (c) 2011 by DIOTEK Co.,LTD. All rights reserved.
 */

#ifndef __DHWR_INK_OBJECT_H__
#define __DHWR_INK_OBJECT_H__ 1

#include "dhwr_define.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup  InkObject InkObject APIs
 * @ingroup   Main
 * @brief     ��ǥ�� �����ϴ� InkObject���� �Լ�
 */

/*@{*/

//! Ink Type 
typedef enum {
  //! Pen Type
  kInkPen = 0,
  //! Erase Type
  kInkErase,
} DHWRInkType;

//! Ink Object Handle
typedef const void* DHWRInkObject;

/*!
 *  @brief ��ũ ������Ʈ�� �����Ѵ�
 *  @return DHWRInkObject
 */
DHWR_API DHWRInkObject DHWRCreateInkObject(void);

/*!
 *  @brief ��ũ ������Ʈ�� �����Ѵ�
 *  @param [in] ink ��ũ ������Ʈ
 *  @return void
 */
DHWR_API void DHWRDestroyInkObject(DHWRInkObject ink);

/*!
 *  @brief ��ũ�� ������ �����Ѵ� (��, ���찳)
 *  @param [in] ink ��ũ ������Ʈ
 *  @param [in] type �� Ÿ��
 *  @return DHWR_ERROR_CODE
 */
DHWR_API unsigned long DHWRSetInkType(DHWRInkObject ink, const DHWRInkType type);

/*!
 *  @brief ���찳ȹ�� �ʺ� �����Ѵ�. ���� ������ ���찳�� ������ �β��� ������
 *  @param [in] ink ��ũ ������Ʈ
 *  @param [in] thick ���찳 �β� ��(������)
 *  @return DHWR_ERROR_CODE
 */
DHWR_API unsigned long DHWRSetEraseThick(DHWRInkObject ink, const unsigned int thick);

/*!
 *  @brief �νĿ������� �ν��� ��ġ ��ǥ(��ũ ��ǥ)�� �߰���
 *  @param [in] ink ��ũ ������Ʈ
 *  @param [in] x x��ǥ
 *  @param [in] y y��ǥ
 *  @return DHWR_ERROR_CODE
 */
DHWR_API unsigned long DHWRAddPoint(DHWRInkObject ink, const int x, const int y);

/*!
 *  @brief TouchUp �̺�Ʈ�� ���� �� ȹ�� �Է��� ������ �� ȣ����
 *  @param [in] ink ��ũ ������Ʈ
 *  @return DHWR_ERROR_CODE
 */
DHWR_API unsigned long DHWREndStroke(DHWRInkObject ink);

/*!
 *  @brief �Է��� ��ǥ �����͸� �ʱ�ȭ��
 *  @param [in] ink ��ũ ������Ʈ
 *  @return DHWR_ERROR_CODE
 */
DHWR_API unsigned long DHWRInkClear(DHWRInkObject ink);

/*!
 *  @brief �Էµ� ��ũ �ε��� ���� �ش��ϴ� ��ũ ��ǥ���� �޾ƿ�
 *  @param [in] ink ��ũ ������Ʈ
 *  @param [in] index �޾ƿ����� �ϴ� ��ũ�� �ε���
 *  @param [out] x �ش� ��ũ�� x��ǥ��
 *  @param [out] y �ش� ��ũ�� y��ǥ��
 *  @return DHWR_ERROR_CODE
 */
DHWR_API unsigned long DHWRGetInkPoint(DHWRInkObject ink, const int index,
  int* x, int* y);

/*!
 *  @brief ������� �Էµ� ��ũ�� ī��Ʈ
 *  @param [in] ink ��ũ ������Ʈ
 *  @param [out] count ��ũ ī��Ʈ
 *  @return DHWR_ERROR_CODE
 */
DHWR_API unsigned long DHWRGetInkCount(DHWRInkObject ink, int* count);

/*!
 *  @brief ���� ��ũ�� ���� ���������� ��Ʈ��ũ�� ���� ���ο� ��ũ ����
 *  @param [in] obj ��ũ ������Ʈ
 *  @param [in] start ������ ���� ��Ʈ��ũ �ε���
 *  @param [in] end ������ ������ ��Ʈ��ũ �ε���
 *  @param [in] ������ ���� �ε���
 *  @return DHWRInkObject
 */
DHWR_API DHWRInkObject DHWRCopyInk(DHWRInkObject obj, const int start, const int end, const int line);

/*@}*/

#ifdef __cplusplus
}
#endif

#endif // __DHWR_INK_OBJECT_H__
