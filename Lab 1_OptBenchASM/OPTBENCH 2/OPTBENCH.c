       /* 컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴 *
        �                                                            �
        �   뫁黍� 收飡�� PC Tech Journal                             �
        �   뮙飡 ��殊Ж쭬與� ぎ쩆 뫅                                 �
        �                                                            �
        �   Copyright (c) 1988 Ziff-Devis Publishing Company         �
        �                                                            �
        �   앪�  �昔｀젹쵟-收飡  〓쳽  �젳�젩��젺�  ㄻ�  �昔´夕�    �
        �   Д獸ㄾ� ��殊Ж쭬與�  ぎ쩆,  �黍Д�畑щ�  ぎНŒ汀�昔�    �
        �   뫅. 렚�  ��  �乙젩졻猶젰�  �젳僧�瑜  誓㎯レ�졻�  �  ��   �
        �   �誓ㅱ�젪ワβ 若昔鼇� 飡Œ� �昔｀젹Ж昔쥯�⑨.             �
        �                                                            �
        * 컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴 */


       #include <stdio.h>
       #include <string.h>
       #define max_vector    2
       #define constant5     5

       typedef unsigned char    uchar;

       int    i, j, k, l, m;
       int    i2, j2, k2;
       int    g3, h3, i3, k3, m3;
       int    i4, j4;
       int    i5, j5, k5;

       double flt_1, flt_2, flt_3, flt_4, flt_5, flt_6;

       int    ivector[ 3 ];
       uchar  ivector2[ 3 ];
       short  ivector4[ 6 ];
       int    ivector5[ 100 ];

       #ifndef NO_PROTOTYPES
       void   dead_code( int, char * );
       void   unnecessary_loop( void );
       void   loop_jamming( int );
       void   loop_unrolling( int );
       int    jump_compression( int, int, int, int, int );
       #else
       void   dead_code();
       void   unnecessary_loop();
       void   loop_jamming();
       void   loop_unrolling();
       int    jump_compression();
       #endif

       int /* cdecl */  main( argc, argv )           /* optbench */
            int argc;
            char **argv;
         {
	   /* 컴컴컴컴컴컴컴컴컴컴컴컴컴컴 *
            � 롡첓� �� 與か�� �
            *컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴*/
			 for(i = 0; i < 3 ; i++) ivector[ i ] = 1;

	   /* 컴컴컴컴컴컴컴컴컴컴컴컴컴컴 *
            � 룯誓�黍聲젴쥯��Ⅳ
            *컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴*/
			 i2 = 5;
			 j4 = 6;
			 i2 = j4;
	   /* 컴컴컴컴컴컴컴컴컴컴컴컴컴컴 *
            � 맆㎚��┘��� ぎ�飡젺� � ぎ�Ł �
            *컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴*/

            j4 = 2;
            if( i2 < j4 && i4 < j4 ){
                i2 = 2;
				printf("Hello");
			}

            j4 = k5;
            if( i2 < j4 && i4 < j4 ){
                i5 = 3;
				printf("Hello");
			}

           /* 컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴 *
	    � 몾�設첓 ぎ�飡젺�, 졷ⓧД殊曄稅�� 獸┐α手� �
            � � �㎙②��� ����졿Ŀ 쭬｀習え/貰魚젺��⑨    �
            * 컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴 */

            i3 = 1 + 2;
            flt_1 = 2.4 + 6.3;
            i2 = 5;
            j2 = i + 0;
            k2 = i / 1;
            i4 = i * 1;
            i5 = i * 0;

      // #ifndef NO_ZERO_DIVIDE
	    /*
             *   뜢ぎ獸贍� ぎНŒ汀�贍 �졹��㎛좐� �鼇―�
             *   ㄵゥ�⑨ 췅 �乘� � �� ％��黍說荻 �↔ⅹ狩硫 ぎ�
             */
        /*    i2 = i / 0;
            flt_2 = flt_1 / 0.0;
       #else
            printf( "This compiler handles divide-by-zero as \
                    an error\n");
       #endif
            flt_3 = 2.4 / 1.0;
            flt_4 = 1.0 + 0.0000001;
            flt_5 = flt_6 * 0.0;
	    flt_6 = flt_2 * flt_3;*/

            /* 컴컴컴컴컴컴컴컴컴컴 *
             �  떒鈺ⅴ �黍聲젴쥯��� �
             * 컴컴컴컴컴컴컴컴컴컴 */

            k3 = 1;
            k3 = 1;

            /* 컴컴컴컴컴컴컴컴컴 *
             �  뫋Ĳ���� М邀�飡� �
             * 컴컴컴컴컴컴컴컴컴 */

	    k2 = 4 * j5;
	    for( i = 0; i <= 5; i++ )
		ivector4[ i ] = i * 2;

	    /* 컴컴컴컴컴컴� *
             �  뤲�飡�� 與か �
             * 컴컴컴컴컴컴� */

            j5 = 0;
            k5 = 10000;
            do {
                k5 = k5 - 1;
                j5 = j5 + 1;
                i5 = (k5 * 3) / (j5 * constant5);
               } while ( k5 > 0 );

            /* 컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴 *
	     �  벏�젪ゥ��� ��誓Д���� ÞㅳゆĿ 與か�  �
             * 컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴 */
            for( i = 0; i < 100; i++ )
                ivector5[ i * 2 + 3 ] = 5;

            /* 컴컴컴컴컴컴컴컴컴컴컴� *
             �  꺂嵩�え� ��ㄲ乙젲��⑨  �
             * 컴컴컴컴컴컴컴컴컴컴컴� */

            if( i < 10 )
                j5 = i5 + i2;
            else
                k5 = i5 + i2;

            /* 컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴 *
             �  뤲�´夕� 獸．, 첓� ぎНŒ汀�� ％��黍說β 젮誓�  �
             �  ��誓Д���� � ぎ�飡젺狩臾 Þㄵめ��, �젳Л�쬊β   �
             �  ぎ�Ŀ � 誓（飡贍                                �
             * 컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴 */

            ivector[ 0 ] = 1;  /* ％���졿⑨ ぎ�飡젺狩�． 젮誓�� */
            ivector[ i2 ] = 2; /* ㎛좂���� i2 ㄾウ�� 〓筍 稅��ⓣ�쥯��*/
            ivector[ i2 ] = 2; /* ぎ�ⓣ�쥯��� 誓（飡昔� */
            ivector[ 2 ] = 3;  /* ％췅�졿⑨ ぎ�飡젺狩�． 젮誓�� */


	    /* 컴컴컴컴컴컴컴컴컴컴컴컴컴컴� *
             �  뱾젷���� �↓ⓨ ��ㄲ乙젲��Ł  �
             * 컴컴컴컴컴컴컴컴컴컴컴컴컴컴� */

            if(( h3 + k3 ) < 0 || ( h3 + k3 ) > 5 )
                printf("Common subexpression elimination\n");
            else {
                m3 = ( h3 + k3 ) / i3;
		g3 = i3 + (h3 + k3);
            }

            /* 컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴 *
             �  귣�α���� Þ쥯黍젺狩�． ぎ쩆          �
             �  (j * k) М┘� 〓筍 �萸α��� �� 與か�  �
	     * 컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴 */

            for( i4 = 0; i4 <= max_vector; i4++){
				printf("Hello");
                ivector2[ i4 ] = j * k;
			}

	    /* 컴컴컴컴컴컴컴컴컴컴컴컴컴컴� *
	     �  귣㎜� 押�ゆĿ � 졷ｃД��젹�  �
	     * 컴컴컴컴컴컴컴컴컴컴컴컴컴컴� */

	    dead_code( 1, "This line should not be printed" );

	    /* 컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴 *
             �  귣㎜� 押�ゆĿ ‥� 졷ｃД�獸�  �
             * 컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴 */

            unnecessary_loop();

	//------------------------------------------------------
	loop_jamming(7);
	loop_unrolling(7);
	jump_compression(1, 2, 3, 4, 5);

         }    /* 뒶�ζ 押�ゆĿ main */


       /* 컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴 *
        �  붵�ゆ⑨: dead_code                                    �
        �           뤲�´夕� �ⅳ�飡Ĳº�． ぎ쩆 � エ鈺ⓨ         �
        �           �黍聲젴쥯�Ł. 뜢 ㄾウ�� ％��黍昔쥯筍碎 ぎ�.  �
        * 컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴 */

       void dead_code( a, b )
            int a;
            char *b;
            {
              int idead_store;

              idead_store = a;
              if( 0 )
                  printf( "%s\n", b );
            } /* 뒶�ζ dead_code */


       /* 컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴 *
        �  붵�ゆ⑨: unnecessary_loop                           �
        �           뼥か � 笹ⅳ莘耀� 押�ゆĿ ���拾��, �젶 첓�  �
        �           ㎛좂���� �黍聲젴쥯�⑨ ��飡�輾��. � Ħ쪧ゥ  �
        �           與か ㄾウ�� 〓筍 蝨젷��.                   �
        * 컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴 */

       void unnecessary_loop()
            {
              int x;

              x = 0;
              for( i = 0; i < 5; i++ )  /* 뼥か �� ㄾウ��
                                             ％��黍昔쥯筍碎*/
                  k5 = x + j5;
            } /* 뒶�ζ unnecessary_loop */

       /* 컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴 *
        �  붵�ゆ⑨: loop_jamming                               �
	�           꽓� 與か� � 將�� 押�ゆĿ ºξ� �ㄸ췅ぎ�瑜  �
	�           쭬．ギ˚� � Мｃ� 〓筍 笹ⓥ� � �ㄸ�.       �
	* 컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴 */


       void loop_jamming( x )
            int x;
            {
                for( i = 0; i < 5; i++ )
                    k5 = x + j5 * i;
                for( i = 0; i < 5; i++ )
                    i5 = x * k5 * i;
            } /* 뒶�ζ loop_jamming */

       /* 컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴 *
        �  붵�ゆ⑨: loop_unrolling                               �
        �           뼥か � 將�� 押�ゆĿ ㄾウ�� 〓筍 쭬Д���      �
        �           循�э �黍聲젴쥯�⑨Ж � ⓤ��レ㎜쥯����        �
	�           ぎ�飡젺狩�� Þㄵめ졿Ŀ 쵟遜Ð� Œ� 쵟鼇���-  �
        �           쭬˘歲щЖ ぎ쵟�쩆Ж ㄻ� Þⓩ쯄エ쭬與�       �
        �           ∥�첓 캙э殊.                                �
        * 컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴 */

       void loop_unrolling( x )
            int x;
            {
                for( i = 0; i < 6; i++ )
                    ivector4[ i ] = 0;
	    } /* 뒶�ζ loop_unrolling */

       /* 컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴� *
	�  붵�ゆ⑨: jump_compression                            �
        �           앪� �昔｀젹쵟 ��ゥ㎛� ㄻ� ㄵМ�飡�졿Ŀ      �
        �           世졻⑨ 璵��囹� ��誓若ㄾ�. goto end_1 М┘�  �
        �           〓筍 쭬Д��� 췅 �涉М� ��誓若� 췅 beg_1.    �
        * 컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴� */

       int jump_compression( i, j, k, l, m )
       int i, j, k, l, m;
           {
       beg_1:
               if( i < j )
                   if( j < k )
                       if( k < l )
			   if( l < m )
                               l += m;
                           else
                               goto end_1;
                       else
                           k += l;
                   else {
                       j += k;
end_1:
                       goto beg_1;
                   }
               else
                   i += j;
               return( i + j + k + l + m );
           } /* 뒶�ζ jump_compression */

