/*
 * Copyright (c) 2020, The Linux Foundation. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef _RX_REO_QUEUE_EXT_H_
#define _RX_REO_QUEUE_EXT_H_
#if !defined(__ASSEMBLER__)
#endif

#include "uniform_descriptor_header.h"
#include "rx_mpdu_link_ptr.h"

// ################ START SUMMARY #################
//
//	Dword	Fields
//	0	struct uniform_descriptor_header descriptor_header;
//	1	reserved_1a[31:0]
//	2-3	struct rx_mpdu_link_ptr mpdu_link_pointer_0;
//	4-5	struct rx_mpdu_link_ptr mpdu_link_pointer_1;
//	6-7	struct rx_mpdu_link_ptr mpdu_link_pointer_2;
//	8-9	struct rx_mpdu_link_ptr mpdu_link_pointer_3;
//	10-11	struct rx_mpdu_link_ptr mpdu_link_pointer_4;
//	12-13	struct rx_mpdu_link_ptr mpdu_link_pointer_5;
//	14-15	struct rx_mpdu_link_ptr mpdu_link_pointer_6;
//	16-17	struct rx_mpdu_link_ptr mpdu_link_pointer_7;
//	18-19	struct rx_mpdu_link_ptr mpdu_link_pointer_8;
//	20-21	struct rx_mpdu_link_ptr mpdu_link_pointer_9;
//	22-23	struct rx_mpdu_link_ptr mpdu_link_pointer_10;
//	24-25	struct rx_mpdu_link_ptr mpdu_link_pointer_11;
//	26-27	struct rx_mpdu_link_ptr mpdu_link_pointer_12;
//	28-29	struct rx_mpdu_link_ptr mpdu_link_pointer_13;
//	30-31	struct rx_mpdu_link_ptr mpdu_link_pointer_14;
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_RX_REO_QUEUE_EXT 32

struct rx_reo_queue_ext {
    struct            uniform_descriptor_header                       descriptor_header;
             uint32_t reserved_1a                     : 32; //[31:0]
    struct            rx_mpdu_link_ptr                       mpdu_link_pointer_0;
    struct            rx_mpdu_link_ptr                       mpdu_link_pointer_1;
    struct            rx_mpdu_link_ptr                       mpdu_link_pointer_2;
    struct            rx_mpdu_link_ptr                       mpdu_link_pointer_3;
    struct            rx_mpdu_link_ptr                       mpdu_link_pointer_4;
    struct            rx_mpdu_link_ptr                       mpdu_link_pointer_5;
    struct            rx_mpdu_link_ptr                       mpdu_link_pointer_6;
    struct            rx_mpdu_link_ptr                       mpdu_link_pointer_7;
    struct            rx_mpdu_link_ptr                       mpdu_link_pointer_8;
    struct            rx_mpdu_link_ptr                       mpdu_link_pointer_9;
    struct            rx_mpdu_link_ptr                       mpdu_link_pointer_10;
    struct            rx_mpdu_link_ptr                       mpdu_link_pointer_11;
    struct            rx_mpdu_link_ptr                       mpdu_link_pointer_12;
    struct            rx_mpdu_link_ptr                       mpdu_link_pointer_13;
    struct            rx_mpdu_link_ptr                       mpdu_link_pointer_14;
};

/*

struct uniform_descriptor_header descriptor_header
			
			Details about which module owns this struct.
			
			Note that sub field Buffer_type shall be set to
			Receive_REO_queue_ext_descriptor

reserved_1a
			
			<legal 0>

struct rx_mpdu_link_ptr mpdu_link_pointer_0
			
			Consumer: REO
			
			Producer: REO
			
			
			
			Pointer to the next MPDU_link descriptor in the MPDU
			queue

struct rx_mpdu_link_ptr mpdu_link_pointer_1
			
			Consumer: REO
			
			Producer: REO
			
			
			
			Pointer to the next MPDU_link descriptor in the MPDU
			queue

struct rx_mpdu_link_ptr mpdu_link_pointer_2
			
			Consumer: REO
			
			Producer: REO
			
			
			
			Pointer to the next MPDU_link descriptor in the MPDU
			queue

struct rx_mpdu_link_ptr mpdu_link_pointer_3
			
			Consumer: REO
			
			Producer: REO
			
			
			
			Pointer to the next MPDU_link descriptor in the MPDU
			queue

struct rx_mpdu_link_ptr mpdu_link_pointer_4
			
			Consumer: REO
			
			Producer: REO
			
			
			
			Pointer to the next MPDU_link descriptor in the MPDU
			queue

struct rx_mpdu_link_ptr mpdu_link_pointer_5
			
			Consumer: REO
			
			Producer: REO
			
			
			
			Pointer to the next MPDU_link descriptor in the MPDU
			queue

struct rx_mpdu_link_ptr mpdu_link_pointer_6
			
			Consumer: REO
			
			Producer: REO
			
			
			
			Pointer to the next MPDU_link descriptor in the MPDU
			queue

struct rx_mpdu_link_ptr mpdu_link_pointer_7
			
			Consumer: REO
			
			Producer: REO
			
			
			
			Pointer to the next MPDU_link descriptor in the MPDU
			queue

struct rx_mpdu_link_ptr mpdu_link_pointer_8
			
			Consumer: REO
			
			Producer: REO
			
			
			
			Pointer to the next MPDU_link descriptor in the MPDU
			queue

struct rx_mpdu_link_ptr mpdu_link_pointer_9
			
			Consumer: REO
			
			Producer: REO
			
			
			
			Pointer to the next MPDU_link descriptor in the MPDU
			queue

struct rx_mpdu_link_ptr mpdu_link_pointer_10
			
			Consumer: REO
			
			Producer: REO
			
			
			
			Pointer to the next MPDU_link descriptor in the MPDU
			queue

struct rx_mpdu_link_ptr mpdu_link_pointer_11
			
			Consumer: REO
			
			Producer: REO
			
			
			
			Pointer to the next MPDU_link descriptor in the MPDU
			queue

struct rx_mpdu_link_ptr mpdu_link_pointer_12
			
			Consumer: REO
			
			Producer: REO
			
			
			
			Pointer to the next MPDU_link descriptor in the MPDU
			queue

struct rx_mpdu_link_ptr mpdu_link_pointer_13
			
			Consumer: REO
			
			Producer: REO
			
			
			
			Pointer to the next MPDU_link descriptor in the MPDU
			queue

struct rx_mpdu_link_ptr mpdu_link_pointer_14
			
			Consumer: REO
			
			Producer: REO
			
			
			
			Pointer to the next MPDU_link descriptor in the MPDU
			queue
*/


 /* EXTERNAL REFERENCE : struct uniform_descriptor_header descriptor_header */ 


/* Description		RX_REO_QUEUE_EXT_0_DESCRIPTOR_HEADER_OWNER
			
			Consumer: In DEBUG mode: WBM, TQM, TXDMA, RXDMA, REO
			
			Producer: In DEBUG mode: WBM, TQM, TXDMA, RXDMA, REO 
			
			
			
			The owner of this data structure:
			
			<enum 0 WBM_owned> Buffer Manager currently owns this
			data structure.
			
			<enum 1 SW_OR_FW_owned> Software of FW currently owns
			this data structure.
			
			<enum 2 TQM_owned> Transmit Queue Manager currently owns
			this data structure.
			
			<enum 3 RXDMA_owned> Receive DMA currently owns this
			data structure.
			
			<enum 4 REO_owned> Reorder currently owns this data
			structure.
			
			<enum 5 SWITCH_owned> SWITCH currently owns this data
			structure.
			
			
			
			<legal 0-5> 
*/
#define RX_REO_QUEUE_EXT_0_DESCRIPTOR_HEADER_OWNER_OFFSET            0x00000000
#define RX_REO_QUEUE_EXT_0_DESCRIPTOR_HEADER_OWNER_LSB               0
#define RX_REO_QUEUE_EXT_0_DESCRIPTOR_HEADER_OWNER_MASK              0x0000000f

/* Description		RX_REO_QUEUE_EXT_0_DESCRIPTOR_HEADER_BUFFER_TYPE
			
			Consumer: In DEBUG mode: WBM, TQM, TXDMA, RXDMA, REO
			
			Producer: In DEBUG mode: WBM, TQM, TXDMA, RXDMA, REO 
			
			
			
			Field describing what contents format is of this
			descriptor
			
			
			
			<enum 0 Transmit_MSDU_Link_descriptor > 
			
			<enum 1 Transmit_MPDU_Link_descriptor > 
			
			<enum 2 Transmit_MPDU_Queue_head_descriptor>
			
			<enum 3 Transmit_MPDU_Queue_ext_descriptor>
			
			<enum 4 Transmit_flow_descriptor>
			
			<enum 5 Transmit_buffer > NOT TO BE USED: 
			
			
			
			<enum 6 Receive_MSDU_Link_descriptor >
			
			<enum 7 Receive_MPDU_Link_descriptor >
			
			<enum 8 Receive_REO_queue_descriptor >
			
			<enum 9 Receive_REO_queue_ext_descriptor >
			
			
			
			<enum 10 Receive_buffer >
			
			
			
			<enum 11 Idle_link_list_entry>
			
			
			
			<legal 0-11> 
*/
#define RX_REO_QUEUE_EXT_0_DESCRIPTOR_HEADER_BUFFER_TYPE_OFFSET      0x00000000
#define RX_REO_QUEUE_EXT_0_DESCRIPTOR_HEADER_BUFFER_TYPE_LSB         4
#define RX_REO_QUEUE_EXT_0_DESCRIPTOR_HEADER_BUFFER_TYPE_MASK        0x000000f0

/* Description		RX_REO_QUEUE_EXT_0_DESCRIPTOR_HEADER_RESERVED_0A
			
			<legal 0>
*/
#define RX_REO_QUEUE_EXT_0_DESCRIPTOR_HEADER_RESERVED_0A_OFFSET      0x00000000
#define RX_REO_QUEUE_EXT_0_DESCRIPTOR_HEADER_RESERVED_0A_LSB         8
#define RX_REO_QUEUE_EXT_0_DESCRIPTOR_HEADER_RESERVED_0A_MASK        0xffffff00

/* Description		RX_REO_QUEUE_EXT_1_RESERVED_1A
			
			<legal 0>
*/
#define RX_REO_QUEUE_EXT_1_RESERVED_1A_OFFSET                        0x00000004
#define RX_REO_QUEUE_EXT_1_RESERVED_1A_LSB                           0
#define RX_REO_QUEUE_EXT_1_RESERVED_1A_MASK                          0xffffffff

 /* EXTERNAL REFERENCE : struct rx_mpdu_link_ptr mpdu_link_pointer_0 */ 


 /* EXTERNAL REFERENCE : struct buffer_addr_info mpdu_link_desc_addr_info */ 


/* Description		RX_REO_QUEUE_EXT_2_MPDU_LINK_POINTER_0_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0
			
			Address (lower 32 bits) of the MSDU buffer OR
			MSDU_EXTENSION descriptor OR Link Descriptor
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_2_MPDU_LINK_POINTER_0_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_OFFSET 0x00000008
#define RX_REO_QUEUE_EXT_2_MPDU_LINK_POINTER_0_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_LSB 0
#define RX_REO_QUEUE_EXT_2_MPDU_LINK_POINTER_0_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_MASK 0xffffffff

/* Description		RX_REO_QUEUE_EXT_3_MPDU_LINK_POINTER_0_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32
			
			Address (upper 8 bits) of the MSDU buffer OR
			MSDU_EXTENSION descriptor OR Link Descriptor
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_3_MPDU_LINK_POINTER_0_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_OFFSET 0x0000000c
#define RX_REO_QUEUE_EXT_3_MPDU_LINK_POINTER_0_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_LSB 0
#define RX_REO_QUEUE_EXT_3_MPDU_LINK_POINTER_0_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_MASK 0x000000ff

/* Description		RX_REO_QUEUE_EXT_3_MPDU_LINK_POINTER_0_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER
			
			Consumer: WBM
			
			Producer: SW/FW
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			
			
			Indicates to which buffer manager the buffer OR
			MSDU_EXTENSION descriptor OR link descriptor that is being
			pointed to shall be returned after the frame has been
			processed. It is used by WBM for routing purposes.
			
			
			
			<enum 0 WBM_IDLE_BUF_LIST> This buffer shall be returned
			to the WMB buffer idle list
			
			<enum 1 WBM_IDLE_DESC_LIST> This buffer shall be
			returned to the WMB idle link descriptor idle list
			
			<enum 2 FW_BM> This buffer shall be returned to the FW
			
			<enum 3 SW0_BM> This buffer shall be returned to the SW,
			ring 0
			
			<enum 4 SW1_BM> This buffer shall be returned to the SW,
			ring 1
			
			<enum 5 SW2_BM> This buffer shall be returned to the SW,
			ring 2
			
			<enum 6 SW3_BM> This buffer shall be returned to the SW,
			ring 3
			
			<enum 7 SW4_BM> This buffer shall be returned to the SW,
			ring 4
			
			
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_3_MPDU_LINK_POINTER_0_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_OFFSET 0x0000000c
#define RX_REO_QUEUE_EXT_3_MPDU_LINK_POINTER_0_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_LSB 8
#define RX_REO_QUEUE_EXT_3_MPDU_LINK_POINTER_0_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_MASK 0x00000700

/* Description		RX_REO_QUEUE_EXT_3_MPDU_LINK_POINTER_0_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE
			
			Cookie field exclusively used by SW. 
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			
			
			HW ignores the contents, accept that it passes the
			programmed value on to other descriptors together with the
			physical address 
			
			
			
			Field can be used by SW to for example associate the
			buffers physical address with the virtual address
			
			The bit definitions as used by SW are within SW HLD
			specification
			
			
			
			NOTE1:
			
			The three most significant bits can have a special
			meaning in case this struct is embedded in a TX_MPDU_DETAILS
			STRUCT, and field transmit_bw_restriction is set
			
			
			
			In case of NON punctured transmission:
			
			Sw_buffer_cookie[20:19] = 2'b00: 20 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b01: 40 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b10: 80 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b11: 160 MHz TX only
			
			
			
			In case of punctured transmission:
			
			Sw_buffer_cookie[20:18] = 3'b000: pattern 0 only
			
			Sw_buffer_cookie[20:18] = 3'b001: pattern 1 only
			
			Sw_buffer_cookie[20:18] = 3'b010: pattern 2 only
			
			Sw_buffer_cookie[20:18] = 3'b011: pattern 3 only
			
			Sw_buffer_cookie[20:18] = 3'b100: pattern 4 only
			
			Sw_buffer_cookie[20:18] = 3'b101: pattern 5 only
			
			Sw_buffer_cookie[20:18] = 3'b110: pattern 6 only
			
			Sw_buffer_cookie[20:18] = 3'b111: pattern 7 only
			
			
			
			Note: a punctured transmission is indicated by the
			presence of TLV TX_PUNCTURE_SETUP embedded in the scheduler
			TLV
			
			
			
			NOTE 2:The five most significant bits can have a special
			meaning in case this struct is embedded in an
			RX_MSDU_DETAILS STRUCT, and Maple/Spruce Rx DMA is
			configured for passing on the additional info
			from??'RX_MPDU_INFO' structure in 'RX_MPDU_START' TLV
			(FR56821). This is not supported in HastingsPrime, Pine or
			Moselle. 
			
			
			
			Sw_buffer_cookie[20:17]: Tid: The TID field in the QoS
			control field
			
			
			
			Sw_buffer_cookie[16]: Mpdu_qos_control_valid: This field
			indicates MPDUs with a QoS control field.
			
			
			
			
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_3_MPDU_LINK_POINTER_0_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_OFFSET 0x0000000c
#define RX_REO_QUEUE_EXT_3_MPDU_LINK_POINTER_0_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_LSB 11
#define RX_REO_QUEUE_EXT_3_MPDU_LINK_POINTER_0_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_MASK 0xfffff800

 /* EXTERNAL REFERENCE : struct rx_mpdu_link_ptr mpdu_link_pointer_1 */ 


 /* EXTERNAL REFERENCE : struct buffer_addr_info mpdu_link_desc_addr_info */ 


/* Description		RX_REO_QUEUE_EXT_4_MPDU_LINK_POINTER_1_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0
			
			Address (lower 32 bits) of the MSDU buffer OR
			MSDU_EXTENSION descriptor OR Link Descriptor
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_4_MPDU_LINK_POINTER_1_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_OFFSET 0x00000010
#define RX_REO_QUEUE_EXT_4_MPDU_LINK_POINTER_1_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_LSB 0
#define RX_REO_QUEUE_EXT_4_MPDU_LINK_POINTER_1_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_MASK 0xffffffff

/* Description		RX_REO_QUEUE_EXT_5_MPDU_LINK_POINTER_1_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32
			
			Address (upper 8 bits) of the MSDU buffer OR
			MSDU_EXTENSION descriptor OR Link Descriptor
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_5_MPDU_LINK_POINTER_1_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_OFFSET 0x00000014
#define RX_REO_QUEUE_EXT_5_MPDU_LINK_POINTER_1_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_LSB 0
#define RX_REO_QUEUE_EXT_5_MPDU_LINK_POINTER_1_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_MASK 0x000000ff

/* Description		RX_REO_QUEUE_EXT_5_MPDU_LINK_POINTER_1_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER
			
			Consumer: WBM
			
			Producer: SW/FW
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			
			
			Indicates to which buffer manager the buffer OR
			MSDU_EXTENSION descriptor OR link descriptor that is being
			pointed to shall be returned after the frame has been
			processed. It is used by WBM for routing purposes.
			
			
			
			<enum 0 WBM_IDLE_BUF_LIST> This buffer shall be returned
			to the WMB buffer idle list
			
			<enum 1 WBM_IDLE_DESC_LIST> This buffer shall be
			returned to the WMB idle link descriptor idle list
			
			<enum 2 FW_BM> This buffer shall be returned to the FW
			
			<enum 3 SW0_BM> This buffer shall be returned to the SW,
			ring 0
			
			<enum 4 SW1_BM> This buffer shall be returned to the SW,
			ring 1
			
			<enum 5 SW2_BM> This buffer shall be returned to the SW,
			ring 2
			
			<enum 6 SW3_BM> This buffer shall be returned to the SW,
			ring 3
			
			<enum 7 SW4_BM> This buffer shall be returned to the SW,
			ring 4
			
			
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_5_MPDU_LINK_POINTER_1_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_OFFSET 0x00000014
#define RX_REO_QUEUE_EXT_5_MPDU_LINK_POINTER_1_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_LSB 8
#define RX_REO_QUEUE_EXT_5_MPDU_LINK_POINTER_1_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_MASK 0x00000700

/* Description		RX_REO_QUEUE_EXT_5_MPDU_LINK_POINTER_1_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE
			
			Cookie field exclusively used by SW. 
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			
			
			HW ignores the contents, accept that it passes the
			programmed value on to other descriptors together with the
			physical address 
			
			
			
			Field can be used by SW to for example associate the
			buffers physical address with the virtual address
			
			The bit definitions as used by SW are within SW HLD
			specification
			
			
			
			NOTE1:
			
			The three most significant bits can have a special
			meaning in case this struct is embedded in a TX_MPDU_DETAILS
			STRUCT, and field transmit_bw_restriction is set
			
			
			
			In case of NON punctured transmission:
			
			Sw_buffer_cookie[20:19] = 2'b00: 20 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b01: 40 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b10: 80 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b11: 160 MHz TX only
			
			
			
			In case of punctured transmission:
			
			Sw_buffer_cookie[20:18] = 3'b000: pattern 0 only
			
			Sw_buffer_cookie[20:18] = 3'b001: pattern 1 only
			
			Sw_buffer_cookie[20:18] = 3'b010: pattern 2 only
			
			Sw_buffer_cookie[20:18] = 3'b011: pattern 3 only
			
			Sw_buffer_cookie[20:18] = 3'b100: pattern 4 only
			
			Sw_buffer_cookie[20:18] = 3'b101: pattern 5 only
			
			Sw_buffer_cookie[20:18] = 3'b110: pattern 6 only
			
			Sw_buffer_cookie[20:18] = 3'b111: pattern 7 only
			
			
			
			Note: a punctured transmission is indicated by the
			presence of TLV TX_PUNCTURE_SETUP embedded in the scheduler
			TLV
			
			
			
			NOTE 2:The five most significant bits can have a special
			meaning in case this struct is embedded in an
			RX_MSDU_DETAILS STRUCT, and Maple/Spruce Rx DMA is
			configured for passing on the additional info
			from??'RX_MPDU_INFO' structure in 'RX_MPDU_START' TLV
			(FR56821). This is not supported in HastingsPrime, Pine or
			Moselle. 
			
			
			
			Sw_buffer_cookie[20:17]: Tid: The TID field in the QoS
			control field
			
			
			
			Sw_buffer_cookie[16]: Mpdu_qos_control_valid: This field
			indicates MPDUs with a QoS control field.
			
			
			
			
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_5_MPDU_LINK_POINTER_1_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_OFFSET 0x00000014
#define RX_REO_QUEUE_EXT_5_MPDU_LINK_POINTER_1_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_LSB 11
#define RX_REO_QUEUE_EXT_5_MPDU_LINK_POINTER_1_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_MASK 0xfffff800

 /* EXTERNAL REFERENCE : struct rx_mpdu_link_ptr mpdu_link_pointer_2 */ 


 /* EXTERNAL REFERENCE : struct buffer_addr_info mpdu_link_desc_addr_info */ 


/* Description		RX_REO_QUEUE_EXT_6_MPDU_LINK_POINTER_2_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0
			
			Address (lower 32 bits) of the MSDU buffer OR
			MSDU_EXTENSION descriptor OR Link Descriptor
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_6_MPDU_LINK_POINTER_2_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_OFFSET 0x00000018
#define RX_REO_QUEUE_EXT_6_MPDU_LINK_POINTER_2_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_LSB 0
#define RX_REO_QUEUE_EXT_6_MPDU_LINK_POINTER_2_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_MASK 0xffffffff

/* Description		RX_REO_QUEUE_EXT_7_MPDU_LINK_POINTER_2_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32
			
			Address (upper 8 bits) of the MSDU buffer OR
			MSDU_EXTENSION descriptor OR Link Descriptor
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_7_MPDU_LINK_POINTER_2_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_OFFSET 0x0000001c
#define RX_REO_QUEUE_EXT_7_MPDU_LINK_POINTER_2_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_LSB 0
#define RX_REO_QUEUE_EXT_7_MPDU_LINK_POINTER_2_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_MASK 0x000000ff

/* Description		RX_REO_QUEUE_EXT_7_MPDU_LINK_POINTER_2_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER
			
			Consumer: WBM
			
			Producer: SW/FW
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			
			
			Indicates to which buffer manager the buffer OR
			MSDU_EXTENSION descriptor OR link descriptor that is being
			pointed to shall be returned after the frame has been
			processed. It is used by WBM for routing purposes.
			
			
			
			<enum 0 WBM_IDLE_BUF_LIST> This buffer shall be returned
			to the WMB buffer idle list
			
			<enum 1 WBM_IDLE_DESC_LIST> This buffer shall be
			returned to the WMB idle link descriptor idle list
			
			<enum 2 FW_BM> This buffer shall be returned to the FW
			
			<enum 3 SW0_BM> This buffer shall be returned to the SW,
			ring 0
			
			<enum 4 SW1_BM> This buffer shall be returned to the SW,
			ring 1
			
			<enum 5 SW2_BM> This buffer shall be returned to the SW,
			ring 2
			
			<enum 6 SW3_BM> This buffer shall be returned to the SW,
			ring 3
			
			<enum 7 SW4_BM> This buffer shall be returned to the SW,
			ring 4
			
			
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_7_MPDU_LINK_POINTER_2_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_OFFSET 0x0000001c
#define RX_REO_QUEUE_EXT_7_MPDU_LINK_POINTER_2_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_LSB 8
#define RX_REO_QUEUE_EXT_7_MPDU_LINK_POINTER_2_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_MASK 0x00000700

/* Description		RX_REO_QUEUE_EXT_7_MPDU_LINK_POINTER_2_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE
			
			Cookie field exclusively used by SW. 
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			
			
			HW ignores the contents, accept that it passes the
			programmed value on to other descriptors together with the
			physical address 
			
			
			
			Field can be used by SW to for example associate the
			buffers physical address with the virtual address
			
			The bit definitions as used by SW are within SW HLD
			specification
			
			
			
			NOTE1:
			
			The three most significant bits can have a special
			meaning in case this struct is embedded in a TX_MPDU_DETAILS
			STRUCT, and field transmit_bw_restriction is set
			
			
			
			In case of NON punctured transmission:
			
			Sw_buffer_cookie[20:19] = 2'b00: 20 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b01: 40 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b10: 80 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b11: 160 MHz TX only
			
			
			
			In case of punctured transmission:
			
			Sw_buffer_cookie[20:18] = 3'b000: pattern 0 only
			
			Sw_buffer_cookie[20:18] = 3'b001: pattern 1 only
			
			Sw_buffer_cookie[20:18] = 3'b010: pattern 2 only
			
			Sw_buffer_cookie[20:18] = 3'b011: pattern 3 only
			
			Sw_buffer_cookie[20:18] = 3'b100: pattern 4 only
			
			Sw_buffer_cookie[20:18] = 3'b101: pattern 5 only
			
			Sw_buffer_cookie[20:18] = 3'b110: pattern 6 only
			
			Sw_buffer_cookie[20:18] = 3'b111: pattern 7 only
			
			
			
			Note: a punctured transmission is indicated by the
			presence of TLV TX_PUNCTURE_SETUP embedded in the scheduler
			TLV
			
			
			
			NOTE 2:The five most significant bits can have a special
			meaning in case this struct is embedded in an
			RX_MSDU_DETAILS STRUCT, and Maple/Spruce Rx DMA is
			configured for passing on the additional info
			from??'RX_MPDU_INFO' structure in 'RX_MPDU_START' TLV
			(FR56821). This is not supported in HastingsPrime, Pine or
			Moselle. 
			
			
			
			Sw_buffer_cookie[20:17]: Tid: The TID field in the QoS
			control field
			
			
			
			Sw_buffer_cookie[16]: Mpdu_qos_control_valid: This field
			indicates MPDUs with a QoS control field.
			
			
			
			
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_7_MPDU_LINK_POINTER_2_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_OFFSET 0x0000001c
#define RX_REO_QUEUE_EXT_7_MPDU_LINK_POINTER_2_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_LSB 11
#define RX_REO_QUEUE_EXT_7_MPDU_LINK_POINTER_2_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_MASK 0xfffff800

 /* EXTERNAL REFERENCE : struct rx_mpdu_link_ptr mpdu_link_pointer_3 */ 


 /* EXTERNAL REFERENCE : struct buffer_addr_info mpdu_link_desc_addr_info */ 


/* Description		RX_REO_QUEUE_EXT_8_MPDU_LINK_POINTER_3_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0
			
			Address (lower 32 bits) of the MSDU buffer OR
			MSDU_EXTENSION descriptor OR Link Descriptor
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_8_MPDU_LINK_POINTER_3_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_OFFSET 0x00000020
#define RX_REO_QUEUE_EXT_8_MPDU_LINK_POINTER_3_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_LSB 0
#define RX_REO_QUEUE_EXT_8_MPDU_LINK_POINTER_3_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_MASK 0xffffffff

/* Description		RX_REO_QUEUE_EXT_9_MPDU_LINK_POINTER_3_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32
			
			Address (upper 8 bits) of the MSDU buffer OR
			MSDU_EXTENSION descriptor OR Link Descriptor
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_9_MPDU_LINK_POINTER_3_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_OFFSET 0x00000024
#define RX_REO_QUEUE_EXT_9_MPDU_LINK_POINTER_3_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_LSB 0
#define RX_REO_QUEUE_EXT_9_MPDU_LINK_POINTER_3_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_MASK 0x000000ff

/* Description		RX_REO_QUEUE_EXT_9_MPDU_LINK_POINTER_3_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER
			
			Consumer: WBM
			
			Producer: SW/FW
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			
			
			Indicates to which buffer manager the buffer OR
			MSDU_EXTENSION descriptor OR link descriptor that is being
			pointed to shall be returned after the frame has been
			processed. It is used by WBM for routing purposes.
			
			
			
			<enum 0 WBM_IDLE_BUF_LIST> This buffer shall be returned
			to the WMB buffer idle list
			
			<enum 1 WBM_IDLE_DESC_LIST> This buffer shall be
			returned to the WMB idle link descriptor idle list
			
			<enum 2 FW_BM> This buffer shall be returned to the FW
			
			<enum 3 SW0_BM> This buffer shall be returned to the SW,
			ring 0
			
			<enum 4 SW1_BM> This buffer shall be returned to the SW,
			ring 1
			
			<enum 5 SW2_BM> This buffer shall be returned to the SW,
			ring 2
			
			<enum 6 SW3_BM> This buffer shall be returned to the SW,
			ring 3
			
			<enum 7 SW4_BM> This buffer shall be returned to the SW,
			ring 4
			
			
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_9_MPDU_LINK_POINTER_3_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_OFFSET 0x00000024
#define RX_REO_QUEUE_EXT_9_MPDU_LINK_POINTER_3_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_LSB 8
#define RX_REO_QUEUE_EXT_9_MPDU_LINK_POINTER_3_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_MASK 0x00000700

/* Description		RX_REO_QUEUE_EXT_9_MPDU_LINK_POINTER_3_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE
			
			Cookie field exclusively used by SW. 
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			
			
			HW ignores the contents, accept that it passes the
			programmed value on to other descriptors together with the
			physical address 
			
			
			
			Field can be used by SW to for example associate the
			buffers physical address with the virtual address
			
			The bit definitions as used by SW are within SW HLD
			specification
			
			
			
			NOTE1:
			
			The three most significant bits can have a special
			meaning in case this struct is embedded in a TX_MPDU_DETAILS
			STRUCT, and field transmit_bw_restriction is set
			
			
			
			In case of NON punctured transmission:
			
			Sw_buffer_cookie[20:19] = 2'b00: 20 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b01: 40 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b10: 80 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b11: 160 MHz TX only
			
			
			
			In case of punctured transmission:
			
			Sw_buffer_cookie[20:18] = 3'b000: pattern 0 only
			
			Sw_buffer_cookie[20:18] = 3'b001: pattern 1 only
			
			Sw_buffer_cookie[20:18] = 3'b010: pattern 2 only
			
			Sw_buffer_cookie[20:18] = 3'b011: pattern 3 only
			
			Sw_buffer_cookie[20:18] = 3'b100: pattern 4 only
			
			Sw_buffer_cookie[20:18] = 3'b101: pattern 5 only
			
			Sw_buffer_cookie[20:18] = 3'b110: pattern 6 only
			
			Sw_buffer_cookie[20:18] = 3'b111: pattern 7 only
			
			
			
			Note: a punctured transmission is indicated by the
			presence of TLV TX_PUNCTURE_SETUP embedded in the scheduler
			TLV
			
			
			
			NOTE 2:The five most significant bits can have a special
			meaning in case this struct is embedded in an
			RX_MSDU_DETAILS STRUCT, and Maple/Spruce Rx DMA is
			configured for passing on the additional info
			from??'RX_MPDU_INFO' structure in 'RX_MPDU_START' TLV
			(FR56821). This is not supported in HastingsPrime, Pine or
			Moselle. 
			
			
			
			Sw_buffer_cookie[20:17]: Tid: The TID field in the QoS
			control field
			
			
			
			Sw_buffer_cookie[16]: Mpdu_qos_control_valid: This field
			indicates MPDUs with a QoS control field.
			
			
			
			
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_9_MPDU_LINK_POINTER_3_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_OFFSET 0x00000024
#define RX_REO_QUEUE_EXT_9_MPDU_LINK_POINTER_3_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_LSB 11
#define RX_REO_QUEUE_EXT_9_MPDU_LINK_POINTER_3_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_MASK 0xfffff800

 /* EXTERNAL REFERENCE : struct rx_mpdu_link_ptr mpdu_link_pointer_4 */ 


 /* EXTERNAL REFERENCE : struct buffer_addr_info mpdu_link_desc_addr_info */ 


/* Description		RX_REO_QUEUE_EXT_10_MPDU_LINK_POINTER_4_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0
			
			Address (lower 32 bits) of the MSDU buffer OR
			MSDU_EXTENSION descriptor OR Link Descriptor
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_10_MPDU_LINK_POINTER_4_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_OFFSET 0x00000028
#define RX_REO_QUEUE_EXT_10_MPDU_LINK_POINTER_4_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_LSB 0
#define RX_REO_QUEUE_EXT_10_MPDU_LINK_POINTER_4_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_MASK 0xffffffff

/* Description		RX_REO_QUEUE_EXT_11_MPDU_LINK_POINTER_4_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32
			
			Address (upper 8 bits) of the MSDU buffer OR
			MSDU_EXTENSION descriptor OR Link Descriptor
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_11_MPDU_LINK_POINTER_4_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_OFFSET 0x0000002c
#define RX_REO_QUEUE_EXT_11_MPDU_LINK_POINTER_4_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_LSB 0
#define RX_REO_QUEUE_EXT_11_MPDU_LINK_POINTER_4_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_MASK 0x000000ff

/* Description		RX_REO_QUEUE_EXT_11_MPDU_LINK_POINTER_4_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER
			
			Consumer: WBM
			
			Producer: SW/FW
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			
			
			Indicates to which buffer manager the buffer OR
			MSDU_EXTENSION descriptor OR link descriptor that is being
			pointed to shall be returned after the frame has been
			processed. It is used by WBM for routing purposes.
			
			
			
			<enum 0 WBM_IDLE_BUF_LIST> This buffer shall be returned
			to the WMB buffer idle list
			
			<enum 1 WBM_IDLE_DESC_LIST> This buffer shall be
			returned to the WMB idle link descriptor idle list
			
			<enum 2 FW_BM> This buffer shall be returned to the FW
			
			<enum 3 SW0_BM> This buffer shall be returned to the SW,
			ring 0
			
			<enum 4 SW1_BM> This buffer shall be returned to the SW,
			ring 1
			
			<enum 5 SW2_BM> This buffer shall be returned to the SW,
			ring 2
			
			<enum 6 SW3_BM> This buffer shall be returned to the SW,
			ring 3
			
			<enum 7 SW4_BM> This buffer shall be returned to the SW,
			ring 4
			
			
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_11_MPDU_LINK_POINTER_4_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_OFFSET 0x0000002c
#define RX_REO_QUEUE_EXT_11_MPDU_LINK_POINTER_4_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_LSB 8
#define RX_REO_QUEUE_EXT_11_MPDU_LINK_POINTER_4_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_MASK 0x00000700

/* Description		RX_REO_QUEUE_EXT_11_MPDU_LINK_POINTER_4_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE
			
			Cookie field exclusively used by SW. 
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			
			
			HW ignores the contents, accept that it passes the
			programmed value on to other descriptors together with the
			physical address 
			
			
			
			Field can be used by SW to for example associate the
			buffers physical address with the virtual address
			
			The bit definitions as used by SW are within SW HLD
			specification
			
			
			
			NOTE1:
			
			The three most significant bits can have a special
			meaning in case this struct is embedded in a TX_MPDU_DETAILS
			STRUCT, and field transmit_bw_restriction is set
			
			
			
			In case of NON punctured transmission:
			
			Sw_buffer_cookie[20:19] = 2'b00: 20 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b01: 40 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b10: 80 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b11: 160 MHz TX only
			
			
			
			In case of punctured transmission:
			
			Sw_buffer_cookie[20:18] = 3'b000: pattern 0 only
			
			Sw_buffer_cookie[20:18] = 3'b001: pattern 1 only
			
			Sw_buffer_cookie[20:18] = 3'b010: pattern 2 only
			
			Sw_buffer_cookie[20:18] = 3'b011: pattern 3 only
			
			Sw_buffer_cookie[20:18] = 3'b100: pattern 4 only
			
			Sw_buffer_cookie[20:18] = 3'b101: pattern 5 only
			
			Sw_buffer_cookie[20:18] = 3'b110: pattern 6 only
			
			Sw_buffer_cookie[20:18] = 3'b111: pattern 7 only
			
			
			
			Note: a punctured transmission is indicated by the
			presence of TLV TX_PUNCTURE_SETUP embedded in the scheduler
			TLV
			
			
			
			NOTE 2:The five most significant bits can have a special
			meaning in case this struct is embedded in an
			RX_MSDU_DETAILS STRUCT, and Maple/Spruce Rx DMA is
			configured for passing on the additional info
			from??'RX_MPDU_INFO' structure in 'RX_MPDU_START' TLV
			(FR56821). This is not supported in HastingsPrime, Pine or
			Moselle. 
			
			
			
			Sw_buffer_cookie[20:17]: Tid: The TID field in the QoS
			control field
			
			
			
			Sw_buffer_cookie[16]: Mpdu_qos_control_valid: This field
			indicates MPDUs with a QoS control field.
			
			
			
			
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_11_MPDU_LINK_POINTER_4_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_OFFSET 0x0000002c
#define RX_REO_QUEUE_EXT_11_MPDU_LINK_POINTER_4_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_LSB 11
#define RX_REO_QUEUE_EXT_11_MPDU_LINK_POINTER_4_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_MASK 0xfffff800

 /* EXTERNAL REFERENCE : struct rx_mpdu_link_ptr mpdu_link_pointer_5 */ 


 /* EXTERNAL REFERENCE : struct buffer_addr_info mpdu_link_desc_addr_info */ 


/* Description		RX_REO_QUEUE_EXT_12_MPDU_LINK_POINTER_5_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0
			
			Address (lower 32 bits) of the MSDU buffer OR
			MSDU_EXTENSION descriptor OR Link Descriptor
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_12_MPDU_LINK_POINTER_5_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_OFFSET 0x00000030
#define RX_REO_QUEUE_EXT_12_MPDU_LINK_POINTER_5_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_LSB 0
#define RX_REO_QUEUE_EXT_12_MPDU_LINK_POINTER_5_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_MASK 0xffffffff

/* Description		RX_REO_QUEUE_EXT_13_MPDU_LINK_POINTER_5_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32
			
			Address (upper 8 bits) of the MSDU buffer OR
			MSDU_EXTENSION descriptor OR Link Descriptor
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_13_MPDU_LINK_POINTER_5_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_OFFSET 0x00000034
#define RX_REO_QUEUE_EXT_13_MPDU_LINK_POINTER_5_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_LSB 0
#define RX_REO_QUEUE_EXT_13_MPDU_LINK_POINTER_5_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_MASK 0x000000ff

/* Description		RX_REO_QUEUE_EXT_13_MPDU_LINK_POINTER_5_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER
			
			Consumer: WBM
			
			Producer: SW/FW
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			
			
			Indicates to which buffer manager the buffer OR
			MSDU_EXTENSION descriptor OR link descriptor that is being
			pointed to shall be returned after the frame has been
			processed. It is used by WBM for routing purposes.
			
			
			
			<enum 0 WBM_IDLE_BUF_LIST> This buffer shall be returned
			to the WMB buffer idle list
			
			<enum 1 WBM_IDLE_DESC_LIST> This buffer shall be
			returned to the WMB idle link descriptor idle list
			
			<enum 2 FW_BM> This buffer shall be returned to the FW
			
			<enum 3 SW0_BM> This buffer shall be returned to the SW,
			ring 0
			
			<enum 4 SW1_BM> This buffer shall be returned to the SW,
			ring 1
			
			<enum 5 SW2_BM> This buffer shall be returned to the SW,
			ring 2
			
			<enum 6 SW3_BM> This buffer shall be returned to the SW,
			ring 3
			
			<enum 7 SW4_BM> This buffer shall be returned to the SW,
			ring 4
			
			
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_13_MPDU_LINK_POINTER_5_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_OFFSET 0x00000034
#define RX_REO_QUEUE_EXT_13_MPDU_LINK_POINTER_5_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_LSB 8
#define RX_REO_QUEUE_EXT_13_MPDU_LINK_POINTER_5_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_MASK 0x00000700

/* Description		RX_REO_QUEUE_EXT_13_MPDU_LINK_POINTER_5_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE
			
			Cookie field exclusively used by SW. 
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			
			
			HW ignores the contents, accept that it passes the
			programmed value on to other descriptors together with the
			physical address 
			
			
			
			Field can be used by SW to for example associate the
			buffers physical address with the virtual address
			
			The bit definitions as used by SW are within SW HLD
			specification
			
			
			
			NOTE1:
			
			The three most significant bits can have a special
			meaning in case this struct is embedded in a TX_MPDU_DETAILS
			STRUCT, and field transmit_bw_restriction is set
			
			
			
			In case of NON punctured transmission:
			
			Sw_buffer_cookie[20:19] = 2'b00: 20 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b01: 40 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b10: 80 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b11: 160 MHz TX only
			
			
			
			In case of punctured transmission:
			
			Sw_buffer_cookie[20:18] = 3'b000: pattern 0 only
			
			Sw_buffer_cookie[20:18] = 3'b001: pattern 1 only
			
			Sw_buffer_cookie[20:18] = 3'b010: pattern 2 only
			
			Sw_buffer_cookie[20:18] = 3'b011: pattern 3 only
			
			Sw_buffer_cookie[20:18] = 3'b100: pattern 4 only
			
			Sw_buffer_cookie[20:18] = 3'b101: pattern 5 only
			
			Sw_buffer_cookie[20:18] = 3'b110: pattern 6 only
			
			Sw_buffer_cookie[20:18] = 3'b111: pattern 7 only
			
			
			
			Note: a punctured transmission is indicated by the
			presence of TLV TX_PUNCTURE_SETUP embedded in the scheduler
			TLV
			
			
			
			NOTE 2:The five most significant bits can have a special
			meaning in case this struct is embedded in an
			RX_MSDU_DETAILS STRUCT, and Maple/Spruce Rx DMA is
			configured for passing on the additional info
			from??'RX_MPDU_INFO' structure in 'RX_MPDU_START' TLV
			(FR56821). This is not supported in HastingsPrime, Pine or
			Moselle. 
			
			
			
			Sw_buffer_cookie[20:17]: Tid: The TID field in the QoS
			control field
			
			
			
			Sw_buffer_cookie[16]: Mpdu_qos_control_valid: This field
			indicates MPDUs with a QoS control field.
			
			
			
			
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_13_MPDU_LINK_POINTER_5_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_OFFSET 0x00000034
#define RX_REO_QUEUE_EXT_13_MPDU_LINK_POINTER_5_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_LSB 11
#define RX_REO_QUEUE_EXT_13_MPDU_LINK_POINTER_5_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_MASK 0xfffff800

 /* EXTERNAL REFERENCE : struct rx_mpdu_link_ptr mpdu_link_pointer_6 */ 


 /* EXTERNAL REFERENCE : struct buffer_addr_info mpdu_link_desc_addr_info */ 


/* Description		RX_REO_QUEUE_EXT_14_MPDU_LINK_POINTER_6_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0
			
			Address (lower 32 bits) of the MSDU buffer OR
			MSDU_EXTENSION descriptor OR Link Descriptor
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_14_MPDU_LINK_POINTER_6_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_OFFSET 0x00000038
#define RX_REO_QUEUE_EXT_14_MPDU_LINK_POINTER_6_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_LSB 0
#define RX_REO_QUEUE_EXT_14_MPDU_LINK_POINTER_6_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_MASK 0xffffffff

/* Description		RX_REO_QUEUE_EXT_15_MPDU_LINK_POINTER_6_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32
			
			Address (upper 8 bits) of the MSDU buffer OR
			MSDU_EXTENSION descriptor OR Link Descriptor
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_15_MPDU_LINK_POINTER_6_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_OFFSET 0x0000003c
#define RX_REO_QUEUE_EXT_15_MPDU_LINK_POINTER_6_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_LSB 0
#define RX_REO_QUEUE_EXT_15_MPDU_LINK_POINTER_6_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_MASK 0x000000ff

/* Description		RX_REO_QUEUE_EXT_15_MPDU_LINK_POINTER_6_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER
			
			Consumer: WBM
			
			Producer: SW/FW
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			
			
			Indicates to which buffer manager the buffer OR
			MSDU_EXTENSION descriptor OR link descriptor that is being
			pointed to shall be returned after the frame has been
			processed. It is used by WBM for routing purposes.
			
			
			
			<enum 0 WBM_IDLE_BUF_LIST> This buffer shall be returned
			to the WMB buffer idle list
			
			<enum 1 WBM_IDLE_DESC_LIST> This buffer shall be
			returned to the WMB idle link descriptor idle list
			
			<enum 2 FW_BM> This buffer shall be returned to the FW
			
			<enum 3 SW0_BM> This buffer shall be returned to the SW,
			ring 0
			
			<enum 4 SW1_BM> This buffer shall be returned to the SW,
			ring 1
			
			<enum 5 SW2_BM> This buffer shall be returned to the SW,
			ring 2
			
			<enum 6 SW3_BM> This buffer shall be returned to the SW,
			ring 3
			
			<enum 7 SW4_BM> This buffer shall be returned to the SW,
			ring 4
			
			
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_15_MPDU_LINK_POINTER_6_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_OFFSET 0x0000003c
#define RX_REO_QUEUE_EXT_15_MPDU_LINK_POINTER_6_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_LSB 8
#define RX_REO_QUEUE_EXT_15_MPDU_LINK_POINTER_6_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_MASK 0x00000700

/* Description		RX_REO_QUEUE_EXT_15_MPDU_LINK_POINTER_6_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE
			
			Cookie field exclusively used by SW. 
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			
			
			HW ignores the contents, accept that it passes the
			programmed value on to other descriptors together with the
			physical address 
			
			
			
			Field can be used by SW to for example associate the
			buffers physical address with the virtual address
			
			The bit definitions as used by SW are within SW HLD
			specification
			
			
			
			NOTE1:
			
			The three most significant bits can have a special
			meaning in case this struct is embedded in a TX_MPDU_DETAILS
			STRUCT, and field transmit_bw_restriction is set
			
			
			
			In case of NON punctured transmission:
			
			Sw_buffer_cookie[20:19] = 2'b00: 20 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b01: 40 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b10: 80 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b11: 160 MHz TX only
			
			
			
			In case of punctured transmission:
			
			Sw_buffer_cookie[20:18] = 3'b000: pattern 0 only
			
			Sw_buffer_cookie[20:18] = 3'b001: pattern 1 only
			
			Sw_buffer_cookie[20:18] = 3'b010: pattern 2 only
			
			Sw_buffer_cookie[20:18] = 3'b011: pattern 3 only
			
			Sw_buffer_cookie[20:18] = 3'b100: pattern 4 only
			
			Sw_buffer_cookie[20:18] = 3'b101: pattern 5 only
			
			Sw_buffer_cookie[20:18] = 3'b110: pattern 6 only
			
			Sw_buffer_cookie[20:18] = 3'b111: pattern 7 only
			
			
			
			Note: a punctured transmission is indicated by the
			presence of TLV TX_PUNCTURE_SETUP embedded in the scheduler
			TLV
			
			
			
			NOTE 2:The five most significant bits can have a special
			meaning in case this struct is embedded in an
			RX_MSDU_DETAILS STRUCT, and Maple/Spruce Rx DMA is
			configured for passing on the additional info
			from??'RX_MPDU_INFO' structure in 'RX_MPDU_START' TLV
			(FR56821). This is not supported in HastingsPrime, Pine or
			Moselle. 
			
			
			
			Sw_buffer_cookie[20:17]: Tid: The TID field in the QoS
			control field
			
			
			
			Sw_buffer_cookie[16]: Mpdu_qos_control_valid: This field
			indicates MPDUs with a QoS control field.
			
			
			
			
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_15_MPDU_LINK_POINTER_6_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_OFFSET 0x0000003c
#define RX_REO_QUEUE_EXT_15_MPDU_LINK_POINTER_6_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_LSB 11
#define RX_REO_QUEUE_EXT_15_MPDU_LINK_POINTER_6_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_MASK 0xfffff800

 /* EXTERNAL REFERENCE : struct rx_mpdu_link_ptr mpdu_link_pointer_7 */ 


 /* EXTERNAL REFERENCE : struct buffer_addr_info mpdu_link_desc_addr_info */ 


/* Description		RX_REO_QUEUE_EXT_16_MPDU_LINK_POINTER_7_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0
			
			Address (lower 32 bits) of the MSDU buffer OR
			MSDU_EXTENSION descriptor OR Link Descriptor
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_16_MPDU_LINK_POINTER_7_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_OFFSET 0x00000040
#define RX_REO_QUEUE_EXT_16_MPDU_LINK_POINTER_7_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_LSB 0
#define RX_REO_QUEUE_EXT_16_MPDU_LINK_POINTER_7_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_MASK 0xffffffff

/* Description		RX_REO_QUEUE_EXT_17_MPDU_LINK_POINTER_7_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32
			
			Address (upper 8 bits) of the MSDU buffer OR
			MSDU_EXTENSION descriptor OR Link Descriptor
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_17_MPDU_LINK_POINTER_7_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_OFFSET 0x00000044
#define RX_REO_QUEUE_EXT_17_MPDU_LINK_POINTER_7_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_LSB 0
#define RX_REO_QUEUE_EXT_17_MPDU_LINK_POINTER_7_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_MASK 0x000000ff

/* Description		RX_REO_QUEUE_EXT_17_MPDU_LINK_POINTER_7_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER
			
			Consumer: WBM
			
			Producer: SW/FW
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			
			
			Indicates to which buffer manager the buffer OR
			MSDU_EXTENSION descriptor OR link descriptor that is being
			pointed to shall be returned after the frame has been
			processed. It is used by WBM for routing purposes.
			
			
			
			<enum 0 WBM_IDLE_BUF_LIST> This buffer shall be returned
			to the WMB buffer idle list
			
			<enum 1 WBM_IDLE_DESC_LIST> This buffer shall be
			returned to the WMB idle link descriptor idle list
			
			<enum 2 FW_BM> This buffer shall be returned to the FW
			
			<enum 3 SW0_BM> This buffer shall be returned to the SW,
			ring 0
			
			<enum 4 SW1_BM> This buffer shall be returned to the SW,
			ring 1
			
			<enum 5 SW2_BM> This buffer shall be returned to the SW,
			ring 2
			
			<enum 6 SW3_BM> This buffer shall be returned to the SW,
			ring 3
			
			<enum 7 SW4_BM> This buffer shall be returned to the SW,
			ring 4
			
			
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_17_MPDU_LINK_POINTER_7_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_OFFSET 0x00000044
#define RX_REO_QUEUE_EXT_17_MPDU_LINK_POINTER_7_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_LSB 8
#define RX_REO_QUEUE_EXT_17_MPDU_LINK_POINTER_7_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_MASK 0x00000700

/* Description		RX_REO_QUEUE_EXT_17_MPDU_LINK_POINTER_7_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE
			
			Cookie field exclusively used by SW. 
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			
			
			HW ignores the contents, accept that it passes the
			programmed value on to other descriptors together with the
			physical address 
			
			
			
			Field can be used by SW to for example associate the
			buffers physical address with the virtual address
			
			The bit definitions as used by SW are within SW HLD
			specification
			
			
			
			NOTE1:
			
			The three most significant bits can have a special
			meaning in case this struct is embedded in a TX_MPDU_DETAILS
			STRUCT, and field transmit_bw_restriction is set
			
			
			
			In case of NON punctured transmission:
			
			Sw_buffer_cookie[20:19] = 2'b00: 20 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b01: 40 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b10: 80 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b11: 160 MHz TX only
			
			
			
			In case of punctured transmission:
			
			Sw_buffer_cookie[20:18] = 3'b000: pattern 0 only
			
			Sw_buffer_cookie[20:18] = 3'b001: pattern 1 only
			
			Sw_buffer_cookie[20:18] = 3'b010: pattern 2 only
			
			Sw_buffer_cookie[20:18] = 3'b011: pattern 3 only
			
			Sw_buffer_cookie[20:18] = 3'b100: pattern 4 only
			
			Sw_buffer_cookie[20:18] = 3'b101: pattern 5 only
			
			Sw_buffer_cookie[20:18] = 3'b110: pattern 6 only
			
			Sw_buffer_cookie[20:18] = 3'b111: pattern 7 only
			
			
			
			Note: a punctured transmission is indicated by the
			presence of TLV TX_PUNCTURE_SETUP embedded in the scheduler
			TLV
			
			
			
			NOTE 2:The five most significant bits can have a special
			meaning in case this struct is embedded in an
			RX_MSDU_DETAILS STRUCT, and Maple/Spruce Rx DMA is
			configured for passing on the additional info
			from??'RX_MPDU_INFO' structure in 'RX_MPDU_START' TLV
			(FR56821). This is not supported in HastingsPrime, Pine or
			Moselle. 
			
			
			
			Sw_buffer_cookie[20:17]: Tid: The TID field in the QoS
			control field
			
			
			
			Sw_buffer_cookie[16]: Mpdu_qos_control_valid: This field
			indicates MPDUs with a QoS control field.
			
			
			
			
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_17_MPDU_LINK_POINTER_7_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_OFFSET 0x00000044
#define RX_REO_QUEUE_EXT_17_MPDU_LINK_POINTER_7_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_LSB 11
#define RX_REO_QUEUE_EXT_17_MPDU_LINK_POINTER_7_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_MASK 0xfffff800

 /* EXTERNAL REFERENCE : struct rx_mpdu_link_ptr mpdu_link_pointer_8 */ 


 /* EXTERNAL REFERENCE : struct buffer_addr_info mpdu_link_desc_addr_info */ 


/* Description		RX_REO_QUEUE_EXT_18_MPDU_LINK_POINTER_8_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0
			
			Address (lower 32 bits) of the MSDU buffer OR
			MSDU_EXTENSION descriptor OR Link Descriptor
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_18_MPDU_LINK_POINTER_8_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_OFFSET 0x00000048
#define RX_REO_QUEUE_EXT_18_MPDU_LINK_POINTER_8_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_LSB 0
#define RX_REO_QUEUE_EXT_18_MPDU_LINK_POINTER_8_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_MASK 0xffffffff

/* Description		RX_REO_QUEUE_EXT_19_MPDU_LINK_POINTER_8_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32
			
			Address (upper 8 bits) of the MSDU buffer OR
			MSDU_EXTENSION descriptor OR Link Descriptor
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_19_MPDU_LINK_POINTER_8_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_OFFSET 0x0000004c
#define RX_REO_QUEUE_EXT_19_MPDU_LINK_POINTER_8_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_LSB 0
#define RX_REO_QUEUE_EXT_19_MPDU_LINK_POINTER_8_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_MASK 0x000000ff

/* Description		RX_REO_QUEUE_EXT_19_MPDU_LINK_POINTER_8_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER
			
			Consumer: WBM
			
			Producer: SW/FW
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			
			
			Indicates to which buffer manager the buffer OR
			MSDU_EXTENSION descriptor OR link descriptor that is being
			pointed to shall be returned after the frame has been
			processed. It is used by WBM for routing purposes.
			
			
			
			<enum 0 WBM_IDLE_BUF_LIST> This buffer shall be returned
			to the WMB buffer idle list
			
			<enum 1 WBM_IDLE_DESC_LIST> This buffer shall be
			returned to the WMB idle link descriptor idle list
			
			<enum 2 FW_BM> This buffer shall be returned to the FW
			
			<enum 3 SW0_BM> This buffer shall be returned to the SW,
			ring 0
			
			<enum 4 SW1_BM> This buffer shall be returned to the SW,
			ring 1
			
			<enum 5 SW2_BM> This buffer shall be returned to the SW,
			ring 2
			
			<enum 6 SW3_BM> This buffer shall be returned to the SW,
			ring 3
			
			<enum 7 SW4_BM> This buffer shall be returned to the SW,
			ring 4
			
			
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_19_MPDU_LINK_POINTER_8_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_OFFSET 0x0000004c
#define RX_REO_QUEUE_EXT_19_MPDU_LINK_POINTER_8_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_LSB 8
#define RX_REO_QUEUE_EXT_19_MPDU_LINK_POINTER_8_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_MASK 0x00000700

/* Description		RX_REO_QUEUE_EXT_19_MPDU_LINK_POINTER_8_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE
			
			Cookie field exclusively used by SW. 
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			
			
			HW ignores the contents, accept that it passes the
			programmed value on to other descriptors together with the
			physical address 
			
			
			
			Field can be used by SW to for example associate the
			buffers physical address with the virtual address
			
			The bit definitions as used by SW are within SW HLD
			specification
			
			
			
			NOTE1:
			
			The three most significant bits can have a special
			meaning in case this struct is embedded in a TX_MPDU_DETAILS
			STRUCT, and field transmit_bw_restriction is set
			
			
			
			In case of NON punctured transmission:
			
			Sw_buffer_cookie[20:19] = 2'b00: 20 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b01: 40 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b10: 80 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b11: 160 MHz TX only
			
			
			
			In case of punctured transmission:
			
			Sw_buffer_cookie[20:18] = 3'b000: pattern 0 only
			
			Sw_buffer_cookie[20:18] = 3'b001: pattern 1 only
			
			Sw_buffer_cookie[20:18] = 3'b010: pattern 2 only
			
			Sw_buffer_cookie[20:18] = 3'b011: pattern 3 only
			
			Sw_buffer_cookie[20:18] = 3'b100: pattern 4 only
			
			Sw_buffer_cookie[20:18] = 3'b101: pattern 5 only
			
			Sw_buffer_cookie[20:18] = 3'b110: pattern 6 only
			
			Sw_buffer_cookie[20:18] = 3'b111: pattern 7 only
			
			
			
			Note: a punctured transmission is indicated by the
			presence of TLV TX_PUNCTURE_SETUP embedded in the scheduler
			TLV
			
			
			
			NOTE 2:The five most significant bits can have a special
			meaning in case this struct is embedded in an
			RX_MSDU_DETAILS STRUCT, and Maple/Spruce Rx DMA is
			configured for passing on the additional info
			from??'RX_MPDU_INFO' structure in 'RX_MPDU_START' TLV
			(FR56821). This is not supported in HastingsPrime, Pine or
			Moselle. 
			
			
			
			Sw_buffer_cookie[20:17]: Tid: The TID field in the QoS
			control field
			
			
			
			Sw_buffer_cookie[16]: Mpdu_qos_control_valid: This field
			indicates MPDUs with a QoS control field.
			
			
			
			
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_19_MPDU_LINK_POINTER_8_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_OFFSET 0x0000004c
#define RX_REO_QUEUE_EXT_19_MPDU_LINK_POINTER_8_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_LSB 11
#define RX_REO_QUEUE_EXT_19_MPDU_LINK_POINTER_8_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_MASK 0xfffff800

 /* EXTERNAL REFERENCE : struct rx_mpdu_link_ptr mpdu_link_pointer_9 */ 


 /* EXTERNAL REFERENCE : struct buffer_addr_info mpdu_link_desc_addr_info */ 


/* Description		RX_REO_QUEUE_EXT_20_MPDU_LINK_POINTER_9_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0
			
			Address (lower 32 bits) of the MSDU buffer OR
			MSDU_EXTENSION descriptor OR Link Descriptor
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_20_MPDU_LINK_POINTER_9_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_OFFSET 0x00000050
#define RX_REO_QUEUE_EXT_20_MPDU_LINK_POINTER_9_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_LSB 0
#define RX_REO_QUEUE_EXT_20_MPDU_LINK_POINTER_9_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_MASK 0xffffffff

/* Description		RX_REO_QUEUE_EXT_21_MPDU_LINK_POINTER_9_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32
			
			Address (upper 8 bits) of the MSDU buffer OR
			MSDU_EXTENSION descriptor OR Link Descriptor
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_21_MPDU_LINK_POINTER_9_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_OFFSET 0x00000054
#define RX_REO_QUEUE_EXT_21_MPDU_LINK_POINTER_9_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_LSB 0
#define RX_REO_QUEUE_EXT_21_MPDU_LINK_POINTER_9_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_MASK 0x000000ff

/* Description		RX_REO_QUEUE_EXT_21_MPDU_LINK_POINTER_9_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER
			
			Consumer: WBM
			
			Producer: SW/FW
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			
			
			Indicates to which buffer manager the buffer OR
			MSDU_EXTENSION descriptor OR link descriptor that is being
			pointed to shall be returned after the frame has been
			processed. It is used by WBM for routing purposes.
			
			
			
			<enum 0 WBM_IDLE_BUF_LIST> This buffer shall be returned
			to the WMB buffer idle list
			
			<enum 1 WBM_IDLE_DESC_LIST> This buffer shall be
			returned to the WMB idle link descriptor idle list
			
			<enum 2 FW_BM> This buffer shall be returned to the FW
			
			<enum 3 SW0_BM> This buffer shall be returned to the SW,
			ring 0
			
			<enum 4 SW1_BM> This buffer shall be returned to the SW,
			ring 1
			
			<enum 5 SW2_BM> This buffer shall be returned to the SW,
			ring 2
			
			<enum 6 SW3_BM> This buffer shall be returned to the SW,
			ring 3
			
			<enum 7 SW4_BM> This buffer shall be returned to the SW,
			ring 4
			
			
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_21_MPDU_LINK_POINTER_9_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_OFFSET 0x00000054
#define RX_REO_QUEUE_EXT_21_MPDU_LINK_POINTER_9_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_LSB 8
#define RX_REO_QUEUE_EXT_21_MPDU_LINK_POINTER_9_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_MASK 0x00000700

/* Description		RX_REO_QUEUE_EXT_21_MPDU_LINK_POINTER_9_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE
			
			Cookie field exclusively used by SW. 
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			
			
			HW ignores the contents, accept that it passes the
			programmed value on to other descriptors together with the
			physical address 
			
			
			
			Field can be used by SW to for example associate the
			buffers physical address with the virtual address
			
			The bit definitions as used by SW are within SW HLD
			specification
			
			
			
			NOTE1:
			
			The three most significant bits can have a special
			meaning in case this struct is embedded in a TX_MPDU_DETAILS
			STRUCT, and field transmit_bw_restriction is set
			
			
			
			In case of NON punctured transmission:
			
			Sw_buffer_cookie[20:19] = 2'b00: 20 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b01: 40 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b10: 80 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b11: 160 MHz TX only
			
			
			
			In case of punctured transmission:
			
			Sw_buffer_cookie[20:18] = 3'b000: pattern 0 only
			
			Sw_buffer_cookie[20:18] = 3'b001: pattern 1 only
			
			Sw_buffer_cookie[20:18] = 3'b010: pattern 2 only
			
			Sw_buffer_cookie[20:18] = 3'b011: pattern 3 only
			
			Sw_buffer_cookie[20:18] = 3'b100: pattern 4 only
			
			Sw_buffer_cookie[20:18] = 3'b101: pattern 5 only
			
			Sw_buffer_cookie[20:18] = 3'b110: pattern 6 only
			
			Sw_buffer_cookie[20:18] = 3'b111: pattern 7 only
			
			
			
			Note: a punctured transmission is indicated by the
			presence of TLV TX_PUNCTURE_SETUP embedded in the scheduler
			TLV
			
			
			
			NOTE 2:The five most significant bits can have a special
			meaning in case this struct is embedded in an
			RX_MSDU_DETAILS STRUCT, and Maple/Spruce Rx DMA is
			configured for passing on the additional info
			from??'RX_MPDU_INFO' structure in 'RX_MPDU_START' TLV
			(FR56821). This is not supported in HastingsPrime, Pine or
			Moselle. 
			
			
			
			Sw_buffer_cookie[20:17]: Tid: The TID field in the QoS
			control field
			
			
			
			Sw_buffer_cookie[16]: Mpdu_qos_control_valid: This field
			indicates MPDUs with a QoS control field.
			
			
			
			
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_21_MPDU_LINK_POINTER_9_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_OFFSET 0x00000054
#define RX_REO_QUEUE_EXT_21_MPDU_LINK_POINTER_9_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_LSB 11
#define RX_REO_QUEUE_EXT_21_MPDU_LINK_POINTER_9_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_MASK 0xfffff800

 /* EXTERNAL REFERENCE : struct rx_mpdu_link_ptr mpdu_link_pointer_10 */ 


 /* EXTERNAL REFERENCE : struct buffer_addr_info mpdu_link_desc_addr_info */ 


/* Description		RX_REO_QUEUE_EXT_22_MPDU_LINK_POINTER_10_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0
			
			Address (lower 32 bits) of the MSDU buffer OR
			MSDU_EXTENSION descriptor OR Link Descriptor
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_22_MPDU_LINK_POINTER_10_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_OFFSET 0x00000058
#define RX_REO_QUEUE_EXT_22_MPDU_LINK_POINTER_10_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_LSB 0
#define RX_REO_QUEUE_EXT_22_MPDU_LINK_POINTER_10_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_MASK 0xffffffff

/* Description		RX_REO_QUEUE_EXT_23_MPDU_LINK_POINTER_10_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32
			
			Address (upper 8 bits) of the MSDU buffer OR
			MSDU_EXTENSION descriptor OR Link Descriptor
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_23_MPDU_LINK_POINTER_10_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_OFFSET 0x0000005c
#define RX_REO_QUEUE_EXT_23_MPDU_LINK_POINTER_10_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_LSB 0
#define RX_REO_QUEUE_EXT_23_MPDU_LINK_POINTER_10_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_MASK 0x000000ff

/* Description		RX_REO_QUEUE_EXT_23_MPDU_LINK_POINTER_10_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER
			
			Consumer: WBM
			
			Producer: SW/FW
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			
			
			Indicates to which buffer manager the buffer OR
			MSDU_EXTENSION descriptor OR link descriptor that is being
			pointed to shall be returned after the frame has been
			processed. It is used by WBM for routing purposes.
			
			
			
			<enum 0 WBM_IDLE_BUF_LIST> This buffer shall be returned
			to the WMB buffer idle list
			
			<enum 1 WBM_IDLE_DESC_LIST> This buffer shall be
			returned to the WMB idle link descriptor idle list
			
			<enum 2 FW_BM> This buffer shall be returned to the FW
			
			<enum 3 SW0_BM> This buffer shall be returned to the SW,
			ring 0
			
			<enum 4 SW1_BM> This buffer shall be returned to the SW,
			ring 1
			
			<enum 5 SW2_BM> This buffer shall be returned to the SW,
			ring 2
			
			<enum 6 SW3_BM> This buffer shall be returned to the SW,
			ring 3
			
			<enum 7 SW4_BM> This buffer shall be returned to the SW,
			ring 4
			
			
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_23_MPDU_LINK_POINTER_10_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_OFFSET 0x0000005c
#define RX_REO_QUEUE_EXT_23_MPDU_LINK_POINTER_10_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_LSB 8
#define RX_REO_QUEUE_EXT_23_MPDU_LINK_POINTER_10_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_MASK 0x00000700

/* Description		RX_REO_QUEUE_EXT_23_MPDU_LINK_POINTER_10_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE
			
			Cookie field exclusively used by SW. 
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			
			
			HW ignores the contents, accept that it passes the
			programmed value on to other descriptors together with the
			physical address 
			
			
			
			Field can be used by SW to for example associate the
			buffers physical address with the virtual address
			
			The bit definitions as used by SW are within SW HLD
			specification
			
			
			
			NOTE1:
			
			The three most significant bits can have a special
			meaning in case this struct is embedded in a TX_MPDU_DETAILS
			STRUCT, and field transmit_bw_restriction is set
			
			
			
			In case of NON punctured transmission:
			
			Sw_buffer_cookie[20:19] = 2'b00: 20 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b01: 40 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b10: 80 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b11: 160 MHz TX only
			
			
			
			In case of punctured transmission:
			
			Sw_buffer_cookie[20:18] = 3'b000: pattern 0 only
			
			Sw_buffer_cookie[20:18] = 3'b001: pattern 1 only
			
			Sw_buffer_cookie[20:18] = 3'b010: pattern 2 only
			
			Sw_buffer_cookie[20:18] = 3'b011: pattern 3 only
			
			Sw_buffer_cookie[20:18] = 3'b100: pattern 4 only
			
			Sw_buffer_cookie[20:18] = 3'b101: pattern 5 only
			
			Sw_buffer_cookie[20:18] = 3'b110: pattern 6 only
			
			Sw_buffer_cookie[20:18] = 3'b111: pattern 7 only
			
			
			
			Note: a punctured transmission is indicated by the
			presence of TLV TX_PUNCTURE_SETUP embedded in the scheduler
			TLV
			
			
			
			NOTE 2:The five most significant bits can have a special
			meaning in case this struct is embedded in an
			RX_MSDU_DETAILS STRUCT, and Maple/Spruce Rx DMA is
			configured for passing on the additional info
			from??'RX_MPDU_INFO' structure in 'RX_MPDU_START' TLV
			(FR56821). This is not supported in HastingsPrime, Pine or
			Moselle. 
			
			
			
			Sw_buffer_cookie[20:17]: Tid: The TID field in the QoS
			control field
			
			
			
			Sw_buffer_cookie[16]: Mpdu_qos_control_valid: This field
			indicates MPDUs with a QoS control field.
			
			
			
			
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_23_MPDU_LINK_POINTER_10_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_OFFSET 0x0000005c
#define RX_REO_QUEUE_EXT_23_MPDU_LINK_POINTER_10_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_LSB 11
#define RX_REO_QUEUE_EXT_23_MPDU_LINK_POINTER_10_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_MASK 0xfffff800

 /* EXTERNAL REFERENCE : struct rx_mpdu_link_ptr mpdu_link_pointer_11 */ 


 /* EXTERNAL REFERENCE : struct buffer_addr_info mpdu_link_desc_addr_info */ 


/* Description		RX_REO_QUEUE_EXT_24_MPDU_LINK_POINTER_11_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0
			
			Address (lower 32 bits) of the MSDU buffer OR
			MSDU_EXTENSION descriptor OR Link Descriptor
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_24_MPDU_LINK_POINTER_11_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_OFFSET 0x00000060
#define RX_REO_QUEUE_EXT_24_MPDU_LINK_POINTER_11_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_LSB 0
#define RX_REO_QUEUE_EXT_24_MPDU_LINK_POINTER_11_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_MASK 0xffffffff

/* Description		RX_REO_QUEUE_EXT_25_MPDU_LINK_POINTER_11_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32
			
			Address (upper 8 bits) of the MSDU buffer OR
			MSDU_EXTENSION descriptor OR Link Descriptor
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_25_MPDU_LINK_POINTER_11_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_OFFSET 0x00000064
#define RX_REO_QUEUE_EXT_25_MPDU_LINK_POINTER_11_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_LSB 0
#define RX_REO_QUEUE_EXT_25_MPDU_LINK_POINTER_11_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_MASK 0x000000ff

/* Description		RX_REO_QUEUE_EXT_25_MPDU_LINK_POINTER_11_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER
			
			Consumer: WBM
			
			Producer: SW/FW
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			
			
			Indicates to which buffer manager the buffer OR
			MSDU_EXTENSION descriptor OR link descriptor that is being
			pointed to shall be returned after the frame has been
			processed. It is used by WBM for routing purposes.
			
			
			
			<enum 0 WBM_IDLE_BUF_LIST> This buffer shall be returned
			to the WMB buffer idle list
			
			<enum 1 WBM_IDLE_DESC_LIST> This buffer shall be
			returned to the WMB idle link descriptor idle list
			
			<enum 2 FW_BM> This buffer shall be returned to the FW
			
			<enum 3 SW0_BM> This buffer shall be returned to the SW,
			ring 0
			
			<enum 4 SW1_BM> This buffer shall be returned to the SW,
			ring 1
			
			<enum 5 SW2_BM> This buffer shall be returned to the SW,
			ring 2
			
			<enum 6 SW3_BM> This buffer shall be returned to the SW,
			ring 3
			
			<enum 7 SW4_BM> This buffer shall be returned to the SW,
			ring 4
			
			
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_25_MPDU_LINK_POINTER_11_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_OFFSET 0x00000064
#define RX_REO_QUEUE_EXT_25_MPDU_LINK_POINTER_11_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_LSB 8
#define RX_REO_QUEUE_EXT_25_MPDU_LINK_POINTER_11_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_MASK 0x00000700

/* Description		RX_REO_QUEUE_EXT_25_MPDU_LINK_POINTER_11_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE
			
			Cookie field exclusively used by SW. 
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			
			
			HW ignores the contents, accept that it passes the
			programmed value on to other descriptors together with the
			physical address 
			
			
			
			Field can be used by SW to for example associate the
			buffers physical address with the virtual address
			
			The bit definitions as used by SW are within SW HLD
			specification
			
			
			
			NOTE1:
			
			The three most significant bits can have a special
			meaning in case this struct is embedded in a TX_MPDU_DETAILS
			STRUCT, and field transmit_bw_restriction is set
			
			
			
			In case of NON punctured transmission:
			
			Sw_buffer_cookie[20:19] = 2'b00: 20 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b01: 40 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b10: 80 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b11: 160 MHz TX only
			
			
			
			In case of punctured transmission:
			
			Sw_buffer_cookie[20:18] = 3'b000: pattern 0 only
			
			Sw_buffer_cookie[20:18] = 3'b001: pattern 1 only
			
			Sw_buffer_cookie[20:18] = 3'b010: pattern 2 only
			
			Sw_buffer_cookie[20:18] = 3'b011: pattern 3 only
			
			Sw_buffer_cookie[20:18] = 3'b100: pattern 4 only
			
			Sw_buffer_cookie[20:18] = 3'b101: pattern 5 only
			
			Sw_buffer_cookie[20:18] = 3'b110: pattern 6 only
			
			Sw_buffer_cookie[20:18] = 3'b111: pattern 7 only
			
			
			
			Note: a punctured transmission is indicated by the
			presence of TLV TX_PUNCTURE_SETUP embedded in the scheduler
			TLV
			
			
			
			NOTE 2:The five most significant bits can have a special
			meaning in case this struct is embedded in an
			RX_MSDU_DETAILS STRUCT, and Maple/Spruce Rx DMA is
			configured for passing on the additional info
			from??'RX_MPDU_INFO' structure in 'RX_MPDU_START' TLV
			(FR56821). This is not supported in HastingsPrime, Pine or
			Moselle. 
			
			
			
			Sw_buffer_cookie[20:17]: Tid: The TID field in the QoS
			control field
			
			
			
			Sw_buffer_cookie[16]: Mpdu_qos_control_valid: This field
			indicates MPDUs with a QoS control field.
			
			
			
			
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_25_MPDU_LINK_POINTER_11_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_OFFSET 0x00000064
#define RX_REO_QUEUE_EXT_25_MPDU_LINK_POINTER_11_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_LSB 11
#define RX_REO_QUEUE_EXT_25_MPDU_LINK_POINTER_11_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_MASK 0xfffff800

 /* EXTERNAL REFERENCE : struct rx_mpdu_link_ptr mpdu_link_pointer_12 */ 


 /* EXTERNAL REFERENCE : struct buffer_addr_info mpdu_link_desc_addr_info */ 


/* Description		RX_REO_QUEUE_EXT_26_MPDU_LINK_POINTER_12_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0
			
			Address (lower 32 bits) of the MSDU buffer OR
			MSDU_EXTENSION descriptor OR Link Descriptor
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_26_MPDU_LINK_POINTER_12_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_OFFSET 0x00000068
#define RX_REO_QUEUE_EXT_26_MPDU_LINK_POINTER_12_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_LSB 0
#define RX_REO_QUEUE_EXT_26_MPDU_LINK_POINTER_12_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_MASK 0xffffffff

/* Description		RX_REO_QUEUE_EXT_27_MPDU_LINK_POINTER_12_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32
			
			Address (upper 8 bits) of the MSDU buffer OR
			MSDU_EXTENSION descriptor OR Link Descriptor
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_27_MPDU_LINK_POINTER_12_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_OFFSET 0x0000006c
#define RX_REO_QUEUE_EXT_27_MPDU_LINK_POINTER_12_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_LSB 0
#define RX_REO_QUEUE_EXT_27_MPDU_LINK_POINTER_12_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_MASK 0x000000ff

/* Description		RX_REO_QUEUE_EXT_27_MPDU_LINK_POINTER_12_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER
			
			Consumer: WBM
			
			Producer: SW/FW
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			
			
			Indicates to which buffer manager the buffer OR
			MSDU_EXTENSION descriptor OR link descriptor that is being
			pointed to shall be returned after the frame has been
			processed. It is used by WBM for routing purposes.
			
			
			
			<enum 0 WBM_IDLE_BUF_LIST> This buffer shall be returned
			to the WMB buffer idle list
			
			<enum 1 WBM_IDLE_DESC_LIST> This buffer shall be
			returned to the WMB idle link descriptor idle list
			
			<enum 2 FW_BM> This buffer shall be returned to the FW
			
			<enum 3 SW0_BM> This buffer shall be returned to the SW,
			ring 0
			
			<enum 4 SW1_BM> This buffer shall be returned to the SW,
			ring 1
			
			<enum 5 SW2_BM> This buffer shall be returned to the SW,
			ring 2
			
			<enum 6 SW3_BM> This buffer shall be returned to the SW,
			ring 3
			
			<enum 7 SW4_BM> This buffer shall be returned to the SW,
			ring 4
			
			
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_27_MPDU_LINK_POINTER_12_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_OFFSET 0x0000006c
#define RX_REO_QUEUE_EXT_27_MPDU_LINK_POINTER_12_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_LSB 8
#define RX_REO_QUEUE_EXT_27_MPDU_LINK_POINTER_12_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_MASK 0x00000700

/* Description		RX_REO_QUEUE_EXT_27_MPDU_LINK_POINTER_12_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE
			
			Cookie field exclusively used by SW. 
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			
			
			HW ignores the contents, accept that it passes the
			programmed value on to other descriptors together with the
			physical address 
			
			
			
			Field can be used by SW to for example associate the
			buffers physical address with the virtual address
			
			The bit definitions as used by SW are within SW HLD
			specification
			
			
			
			NOTE1:
			
			The three most significant bits can have a special
			meaning in case this struct is embedded in a TX_MPDU_DETAILS
			STRUCT, and field transmit_bw_restriction is set
			
			
			
			In case of NON punctured transmission:
			
			Sw_buffer_cookie[20:19] = 2'b00: 20 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b01: 40 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b10: 80 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b11: 160 MHz TX only
			
			
			
			In case of punctured transmission:
			
			Sw_buffer_cookie[20:18] = 3'b000: pattern 0 only
			
			Sw_buffer_cookie[20:18] = 3'b001: pattern 1 only
			
			Sw_buffer_cookie[20:18] = 3'b010: pattern 2 only
			
			Sw_buffer_cookie[20:18] = 3'b011: pattern 3 only
			
			Sw_buffer_cookie[20:18] = 3'b100: pattern 4 only
			
			Sw_buffer_cookie[20:18] = 3'b101: pattern 5 only
			
			Sw_buffer_cookie[20:18] = 3'b110: pattern 6 only
			
			Sw_buffer_cookie[20:18] = 3'b111: pattern 7 only
			
			
			
			Note: a punctured transmission is indicated by the
			presence of TLV TX_PUNCTURE_SETUP embedded in the scheduler
			TLV
			
			
			
			NOTE 2:The five most significant bits can have a special
			meaning in case this struct is embedded in an
			RX_MSDU_DETAILS STRUCT, and Maple/Spruce Rx DMA is
			configured for passing on the additional info
			from??'RX_MPDU_INFO' structure in 'RX_MPDU_START' TLV
			(FR56821). This is not supported in HastingsPrime, Pine or
			Moselle. 
			
			
			
			Sw_buffer_cookie[20:17]: Tid: The TID field in the QoS
			control field
			
			
			
			Sw_buffer_cookie[16]: Mpdu_qos_control_valid: This field
			indicates MPDUs with a QoS control field.
			
			
			
			
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_27_MPDU_LINK_POINTER_12_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_OFFSET 0x0000006c
#define RX_REO_QUEUE_EXT_27_MPDU_LINK_POINTER_12_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_LSB 11
#define RX_REO_QUEUE_EXT_27_MPDU_LINK_POINTER_12_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_MASK 0xfffff800

 /* EXTERNAL REFERENCE : struct rx_mpdu_link_ptr mpdu_link_pointer_13 */ 


 /* EXTERNAL REFERENCE : struct buffer_addr_info mpdu_link_desc_addr_info */ 


/* Description		RX_REO_QUEUE_EXT_28_MPDU_LINK_POINTER_13_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0
			
			Address (lower 32 bits) of the MSDU buffer OR
			MSDU_EXTENSION descriptor OR Link Descriptor
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_28_MPDU_LINK_POINTER_13_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_OFFSET 0x00000070
#define RX_REO_QUEUE_EXT_28_MPDU_LINK_POINTER_13_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_LSB 0
#define RX_REO_QUEUE_EXT_28_MPDU_LINK_POINTER_13_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_MASK 0xffffffff

/* Description		RX_REO_QUEUE_EXT_29_MPDU_LINK_POINTER_13_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32
			
			Address (upper 8 bits) of the MSDU buffer OR
			MSDU_EXTENSION descriptor OR Link Descriptor
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_29_MPDU_LINK_POINTER_13_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_OFFSET 0x00000074
#define RX_REO_QUEUE_EXT_29_MPDU_LINK_POINTER_13_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_LSB 0
#define RX_REO_QUEUE_EXT_29_MPDU_LINK_POINTER_13_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_MASK 0x000000ff

/* Description		RX_REO_QUEUE_EXT_29_MPDU_LINK_POINTER_13_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER
			
			Consumer: WBM
			
			Producer: SW/FW
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			
			
			Indicates to which buffer manager the buffer OR
			MSDU_EXTENSION descriptor OR link descriptor that is being
			pointed to shall be returned after the frame has been
			processed. It is used by WBM for routing purposes.
			
			
			
			<enum 0 WBM_IDLE_BUF_LIST> This buffer shall be returned
			to the WMB buffer idle list
			
			<enum 1 WBM_IDLE_DESC_LIST> This buffer shall be
			returned to the WMB idle link descriptor idle list
			
			<enum 2 FW_BM> This buffer shall be returned to the FW
			
			<enum 3 SW0_BM> This buffer shall be returned to the SW,
			ring 0
			
			<enum 4 SW1_BM> This buffer shall be returned to the SW,
			ring 1
			
			<enum 5 SW2_BM> This buffer shall be returned to the SW,
			ring 2
			
			<enum 6 SW3_BM> This buffer shall be returned to the SW,
			ring 3
			
			<enum 7 SW4_BM> This buffer shall be returned to the SW,
			ring 4
			
			
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_29_MPDU_LINK_POINTER_13_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_OFFSET 0x00000074
#define RX_REO_QUEUE_EXT_29_MPDU_LINK_POINTER_13_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_LSB 8
#define RX_REO_QUEUE_EXT_29_MPDU_LINK_POINTER_13_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_MASK 0x00000700

/* Description		RX_REO_QUEUE_EXT_29_MPDU_LINK_POINTER_13_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE
			
			Cookie field exclusively used by SW. 
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			
			
			HW ignores the contents, accept that it passes the
			programmed value on to other descriptors together with the
			physical address 
			
			
			
			Field can be used by SW to for example associate the
			buffers physical address with the virtual address
			
			The bit definitions as used by SW are within SW HLD
			specification
			
			
			
			NOTE1:
			
			The three most significant bits can have a special
			meaning in case this struct is embedded in a TX_MPDU_DETAILS
			STRUCT, and field transmit_bw_restriction is set
			
			
			
			In case of NON punctured transmission:
			
			Sw_buffer_cookie[20:19] = 2'b00: 20 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b01: 40 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b10: 80 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b11: 160 MHz TX only
			
			
			
			In case of punctured transmission:
			
			Sw_buffer_cookie[20:18] = 3'b000: pattern 0 only
			
			Sw_buffer_cookie[20:18] = 3'b001: pattern 1 only
			
			Sw_buffer_cookie[20:18] = 3'b010: pattern 2 only
			
			Sw_buffer_cookie[20:18] = 3'b011: pattern 3 only
			
			Sw_buffer_cookie[20:18] = 3'b100: pattern 4 only
			
			Sw_buffer_cookie[20:18] = 3'b101: pattern 5 only
			
			Sw_buffer_cookie[20:18] = 3'b110: pattern 6 only
			
			Sw_buffer_cookie[20:18] = 3'b111: pattern 7 only
			
			
			
			Note: a punctured transmission is indicated by the
			presence of TLV TX_PUNCTURE_SETUP embedded in the scheduler
			TLV
			
			
			
			NOTE 2:The five most significant bits can have a special
			meaning in case this struct is embedded in an
			RX_MSDU_DETAILS STRUCT, and Maple/Spruce Rx DMA is
			configured for passing on the additional info
			from??'RX_MPDU_INFO' structure in 'RX_MPDU_START' TLV
			(FR56821). This is not supported in HastingsPrime, Pine or
			Moselle. 
			
			
			
			Sw_buffer_cookie[20:17]: Tid: The TID field in the QoS
			control field
			
			
			
			Sw_buffer_cookie[16]: Mpdu_qos_control_valid: This field
			indicates MPDUs with a QoS control field.
			
			
			
			
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_29_MPDU_LINK_POINTER_13_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_OFFSET 0x00000074
#define RX_REO_QUEUE_EXT_29_MPDU_LINK_POINTER_13_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_LSB 11
#define RX_REO_QUEUE_EXT_29_MPDU_LINK_POINTER_13_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_MASK 0xfffff800

 /* EXTERNAL REFERENCE : struct rx_mpdu_link_ptr mpdu_link_pointer_14 */ 


 /* EXTERNAL REFERENCE : struct buffer_addr_info mpdu_link_desc_addr_info */ 


/* Description		RX_REO_QUEUE_EXT_30_MPDU_LINK_POINTER_14_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0
			
			Address (lower 32 bits) of the MSDU buffer OR
			MSDU_EXTENSION descriptor OR Link Descriptor
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_30_MPDU_LINK_POINTER_14_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_OFFSET 0x00000078
#define RX_REO_QUEUE_EXT_30_MPDU_LINK_POINTER_14_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_LSB 0
#define RX_REO_QUEUE_EXT_30_MPDU_LINK_POINTER_14_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_MASK 0xffffffff

/* Description		RX_REO_QUEUE_EXT_31_MPDU_LINK_POINTER_14_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32
			
			Address (upper 8 bits) of the MSDU buffer OR
			MSDU_EXTENSION descriptor OR Link Descriptor
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_31_MPDU_LINK_POINTER_14_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_OFFSET 0x0000007c
#define RX_REO_QUEUE_EXT_31_MPDU_LINK_POINTER_14_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_LSB 0
#define RX_REO_QUEUE_EXT_31_MPDU_LINK_POINTER_14_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_MASK 0x000000ff

/* Description		RX_REO_QUEUE_EXT_31_MPDU_LINK_POINTER_14_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER
			
			Consumer: WBM
			
			Producer: SW/FW
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			
			
			Indicates to which buffer manager the buffer OR
			MSDU_EXTENSION descriptor OR link descriptor that is being
			pointed to shall be returned after the frame has been
			processed. It is used by WBM for routing purposes.
			
			
			
			<enum 0 WBM_IDLE_BUF_LIST> This buffer shall be returned
			to the WMB buffer idle list
			
			<enum 1 WBM_IDLE_DESC_LIST> This buffer shall be
			returned to the WMB idle link descriptor idle list
			
			<enum 2 FW_BM> This buffer shall be returned to the FW
			
			<enum 3 SW0_BM> This buffer shall be returned to the SW,
			ring 0
			
			<enum 4 SW1_BM> This buffer shall be returned to the SW,
			ring 1
			
			<enum 5 SW2_BM> This buffer shall be returned to the SW,
			ring 2
			
			<enum 6 SW3_BM> This buffer shall be returned to the SW,
			ring 3
			
			<enum 7 SW4_BM> This buffer shall be returned to the SW,
			ring 4
			
			
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_31_MPDU_LINK_POINTER_14_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_OFFSET 0x0000007c
#define RX_REO_QUEUE_EXT_31_MPDU_LINK_POINTER_14_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_LSB 8
#define RX_REO_QUEUE_EXT_31_MPDU_LINK_POINTER_14_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_MASK 0x00000700

/* Description		RX_REO_QUEUE_EXT_31_MPDU_LINK_POINTER_14_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE
			
			Cookie field exclusively used by SW. 
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			
			
			HW ignores the contents, accept that it passes the
			programmed value on to other descriptors together with the
			physical address 
			
			
			
			Field can be used by SW to for example associate the
			buffers physical address with the virtual address
			
			The bit definitions as used by SW are within SW HLD
			specification
			
			
			
			NOTE1:
			
			The three most significant bits can have a special
			meaning in case this struct is embedded in a TX_MPDU_DETAILS
			STRUCT, and field transmit_bw_restriction is set
			
			
			
			In case of NON punctured transmission:
			
			Sw_buffer_cookie[20:19] = 2'b00: 20 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b01: 40 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b10: 80 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b11: 160 MHz TX only
			
			
			
			In case of punctured transmission:
			
			Sw_buffer_cookie[20:18] = 3'b000: pattern 0 only
			
			Sw_buffer_cookie[20:18] = 3'b001: pattern 1 only
			
			Sw_buffer_cookie[20:18] = 3'b010: pattern 2 only
			
			Sw_buffer_cookie[20:18] = 3'b011: pattern 3 only
			
			Sw_buffer_cookie[20:18] = 3'b100: pattern 4 only
			
			Sw_buffer_cookie[20:18] = 3'b101: pattern 5 only
			
			Sw_buffer_cookie[20:18] = 3'b110: pattern 6 only
			
			Sw_buffer_cookie[20:18] = 3'b111: pattern 7 only
			
			
			
			Note: a punctured transmission is indicated by the
			presence of TLV TX_PUNCTURE_SETUP embedded in the scheduler
			TLV
			
			
			
			NOTE 2:The five most significant bits can have a special
			meaning in case this struct is embedded in an
			RX_MSDU_DETAILS STRUCT, and Maple/Spruce Rx DMA is
			configured for passing on the additional info
			from??'RX_MPDU_INFO' structure in 'RX_MPDU_START' TLV
			(FR56821). This is not supported in HastingsPrime, Pine or
			Moselle. 
			
			
			
			Sw_buffer_cookie[20:17]: Tid: The TID field in the QoS
			control field
			
			
			
			Sw_buffer_cookie[16]: Mpdu_qos_control_valid: This field
			indicates MPDUs with a QoS control field.
			
			
			
			
			
			<legal all>
*/
#define RX_REO_QUEUE_EXT_31_MPDU_LINK_POINTER_14_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_OFFSET 0x0000007c
#define RX_REO_QUEUE_EXT_31_MPDU_LINK_POINTER_14_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_LSB 11
#define RX_REO_QUEUE_EXT_31_MPDU_LINK_POINTER_14_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_MASK 0xfffff800


#endif // _RX_REO_QUEUE_EXT_H_
