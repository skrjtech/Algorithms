#ifndef __ERROR_HEADER_INCLUDE
#define __ERROR_HEADER_INCLUDE

typedef unsigned int ErrorCode;

#define ERROR_NONE 0

/*
 * プログラムが継続不可能なバグ．(主にコーディングミスによる内部のバグ)
 */
#define ERROR_NULL_OBJECT    (1 << 16) /* オブジェクトが存在しない */
#define ERROR_INVALID_VALUE  (1 << 17) /* 変数，引数の値が不正 */
#define ERROR_DUPLICATE      (1 << 18) /* ２重に操作を行った */
#define ERROR_FAIL_CHILD     (1 << 19) /* 子オブジェクトの生成に失敗 */
#define ERROR_FAIL_DESTROY   (1 << 20) /* オブジェクトの消去に失敗 */

#define ERROR_ALL (ERROR_NULL_OBJECT | \
		   ERROR_INVALID_VALUE | \
		   ERROR_DUPLICATE | \
		   ERROR_FAIL_CHILD | \
		   ERROR_FAIL_DESTROY)

/*
 * 継続可能なバグ．
 * 外部の要因によるバグ．もしくはバグ以外など(単なるワーニングなど)．
 * 実行は極力継続する．
 */
#define WARNING_CANNOT_ALLOCATE_MEMORY (1 << 0) /* メモリ枯渇 */
#define WARNING_DESTROYED_OBJECT       (1 << 1) /* すでに DESTROY されている */
#define WARNING_REFERED_OBJECT         (1 << 2) /* 他から参照されている */
#define WARNING_CANNOT_END             (1 << 3) /* 終了処理できない */

#define WARNING_ALL (WARNING_CANNOT_ALLOCATE_MEMORY | \
		     WARNING_DESTROYED_OBJECT | \
		     WARNING_REFERED_OBJECT | \
		     WARNING_CANNOT_END)

void ERROR_INFO(char * funcname, char * message);
void WARNING_INFO(char * funcname, char * message);

#endif
