/**********************************************************************************
 * Copyright: 
 * Project: RootElement
 * File: Aplicacion/GrandGrandChildren.h
 * Code Management Tool File Version: 
 * SDD Component: GrandGrandChildren
 * Language: C
 * Author: 
 **********************************************************************************/

/*!
 * \file Aplicacion/GrandGrandChildren.h
 * \brief GrandGrandChildren
 */

#ifndef Aplicacion_GrandGrandChildren_H
#define Aplicacion_GrandGrandChildren_H

/* Dependency with parent package */
#include "Aplicacion/Aplicacion.h"
#include "Aplicacion/GrandChildren.h"


/**********************************************************************************
 * Aplicacion/GrandGrandChildren.h
 **********************************************************************************/

/*## package Aplicacion */

/*! 
 * \package GrandGrandChildren
 */

/*## class TopLevel::GrandGrandChildren */







/*!
 * \brief Type definition of the class GrandGrandChildren
 */
//Class GrandGrandChildren V-Table
struct GrandGrandChildrenVtbl;

//Class GrandGrandChildren declaration
typedef struct {
	GrandChildren super;
}GrandGrandChildren;


//Class GrandGrandChildren V-Table
typedef struct GrandGrandChildrenVtbl{
	GrandChildrenVtbl superClass;
}GrandGrandChildrenVtbl;


void GrandGrandChildren_ctor (GrandGrandChildren * self, const char * name);

char * GrandGrandChildren_getNameFollowedByClassName_ (GrandChildren * self);


#endif

/**********************************************************************************
 * File Path: Aplicacion/GrandGrandChildren.h
 **********************************************************************************/
