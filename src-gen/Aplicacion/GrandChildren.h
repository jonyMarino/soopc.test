/**********************************************************************************
 * Copyright: 
 * Project: RootElement
 * File: Aplicacion/GrandChildren.h
 * Code Management Tool File Version: 
 * SDD Component: GrandChildren
 * Language: C
 * Author: 
 **********************************************************************************/

/*!
 * \file Aplicacion/GrandChildren.h
 * \brief GrandChildren
 */

#ifndef Aplicacion_GrandChildren_H
#define Aplicacion_GrandChildren_H

/* Dependency with parent package */
#include "Aplicacion/Aplicacion.h"
#include "Aplicacion/Child.h"


/**********************************************************************************
 * Aplicacion/GrandChildren.h
 **********************************************************************************/

/*## package Aplicacion */

/*! 
 * \package GrandChildren
 */

/*## class TopLevel::GrandChildren */







/*!
 * \brief Type definition of the class GrandChildren
 */
//Class GrandChildren V-Table
struct GrandChildrenVtbl;

//Class GrandChildren declaration
typedef struct {
	Child super;
}GrandChildren;


//Class GrandChildren V-Table
typedef struct GrandChildrenVtbl{
	ChildVtbl superClass;
}GrandChildrenVtbl;


void GrandChildren_ctor (GrandChildren * self, const char * name);
void GrandChildren_foo (GrandChildren * self);

void GrandChildren_vPrint_ (Parent * self);
void GrandChildren_foo_ (GrandChildren * self);
char * GrandChildren_getNameFollowedByClassName_ (Child * self);


#endif

/**********************************************************************************
 * File Path: Aplicacion/GrandChildren.h
 **********************************************************************************/
