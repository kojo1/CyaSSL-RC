/* config-RTX-TCP-FS.h
 *
 * Copyright (C) 2006-2013 wolfSSL Inc.
 *
 * This file is part of CyaSSL.
 *
 * CyaSSL is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * CyaSSL is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA
 */


/**** CyaSSL for KEIL-RL Configuration ****/

#define __CORTEX_M3__
#define CYASSL_MDK_ARM
#define NO_WRITEV
#define NO_CYASSL_DIR
#define NO_MAIN_DRIVER


#define CYASSL_DER_LOAD
#define HAVE_NULL_CIPHER

#define HAVE_KEIL_RTX
#define CYASSL_CMSIS_RTOS
#define CYASSL_KEIL_TCP_NET


// <<< Use Configuration Wizard in Context Menu >>>
// <h> Build Target: Simple Client
//   <s.15>Callee IP Address
//   <i> Default: "192.168.1.100"
#define CYASSL_CALLEE_IP           "192.168.2.101"
//   <o>Callee Port Number
//   <i> Default: "11111"
#define CYASSL_CALLEE_PORT           11111

//     </h>
// <<< end of configuration section >>>
