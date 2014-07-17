/*******************************************************************************
    OpenAirInterface
    Copyright(c) 1999 - 2014 Eurecom

    OpenAirInterface is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.


    OpenAirInterface is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with OpenAirInterface.The full GNU General Public License is
   included in this distribution in the file called "COPYING". If not,
   see <http://www.gnu.org/licenses/>.

  Contact Information
  OpenAirInterface Admin: openair_admin@eurecom.fr
  OpenAirInterface Tech : openair_tech@eurecom.fr
  OpenAirInterface Dev  : openair4g-devel@eurecom.fr

  Address      : Eurecom, Compus SophiaTech 450, route des chappes, 06451 Biot, France.

 *******************************************************************************/
/***************************************************************************
                          rlc_am_receiver_proto_extern.h  -
                             -------------------
  AUTHOR  : Lionel GAUTHIER
  COMPANY : EURECOM
  EMAIL   : Lionel.Gauthier@eurecom.fr

 ***************************************************************************/
#    ifndef __RLC_AM_RECEIVER_PROTO_EXTERN_H__
#        define __RLC_AM_RECEIVER_PROTO_EXTERN_H__
//-----------------------------------------------------------------------------
#        include "rlc_am_entity.h"
#        include "rlc_am_structs.h"
#        include "mem_block.h"
//-----------------------------------------------------------------------------
extern void     receiver_retransmission_management (struct rlc_am_entity *rlcP, mem_block_t * pduP, struct rlc_am_pdu_header *rlc_headerP);
extern void     free_receiver_buffer (struct rlc_am_entity *rlcP, uint16_t indexP);
extern void     insert_into_receiver_buffer (struct rlc_am_entity *rlcP, uint16_t indexP, mem_block_t * pduP);
extern void     process_receiver_buffer_15 (struct rlc_am_entity *rlcP);
extern void     process_receiver_buffer_7 (struct rlc_am_entity *rlcP);
#    endif
