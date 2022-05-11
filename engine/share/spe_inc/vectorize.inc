Copyright>        OpenRadioss
Copyright>        Copyright (C) 1986-2022 Altair Engineering Inc.
Copyright>    
Copyright>        This program is free software: you can redistribute it and/or modify
Copyright>        it under the terms of the GNU Affero General Public License as published by
Copyright>        the Free Software Foundation, either version 3 of the License, or
Copyright>        (at your option) any later version.
Copyright>    
Copyright>        This program is distributed in the hope that it will be useful,
Copyright>        but WITHOUT ANY WARRANTY; without even the implied warranty of
Copyright>        MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
Copyright>        GNU Affero General Public License for more details.
Copyright>    
Copyright>        You should have received a copy of the GNU Affero General Public License
Copyright>        along with this program.  If not, see <https://www.gnu.org/licenses/>.
Copyright>    
Copyright>    
Copyright>        Commercial Alternative: Altair Radioss Software 
Copyright>    
Copyright>        As an alternative to this open-source version, Altair also offers Altair Radioss 
Copyright>        software under a commercial license.  Contact Altair to discuss further if the 
Copyright>        commercial version may interest you: https://www.altair.com/radioss/.    
#include "hardware.inc"


#if CPP_mach == CPP_ymp || CPP_mach == CPP_ymp_spmd || CPP_mach == CPP_c90 || CPP_mach == CPP_t90 || CPP_mach == CPP_t90_i3e || CPP_mach == CPP_cx1 || CPP_mach == CPP_cx1_spmd
CDIR$ IVDEP
#elif CPP_mach == CPP_cvx
C$DIR NO_RECURRENCE
Cow41p6+1 #elif CPP_mach == CPP_sx4 ||  CPP_mach == CPP_sx4_i3e
#elif CPP_mach == CPP_sx4 ||  CPP_mach == CPP_sx4_i3e ||  CPP_mach == CPP_sx5_spmd
*VDIR NODEP
#elif CPP_mach == CPP_vpp || CPP_mach == CPP_vpp_spmd
!OCL NOVREC
#elif CPP_mach == CPP_sun25
C$pragma SUN pipeloop=0
#elif CPP_mach == CPP_sgi6 && CPP_rel == 50
CDIR$ IVDEP
#elif CPP_mach == CPP_p4linux964 || CPP_mach == p4win64

#ifdef COMP_GFORTRAN
!$OMP SIMD
#else

#ifdef COMP_ARMFLANG
!DIR$ IVDEP
#else
!DIR$ IVDEP
#endif

#endif

#elif 1
Ceric pas de dependance
#endif
