/*=========================================================================

  Program:   Insight Segmentation & Registration Toolkit
  Module:    fltkPointSet2D.txx
  Language:  C++
  Date:      $Date$
  Version:   $Revision$

Copyright (c) 2001 Insight Consortium
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

 * Redistributions of source code must retain the above copyright notice,
   this list of conditions and the following disclaimer.

 * Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.

 * The name of the Insight Consortium, nor the names of any consortium members,
   nor of any contributors, may be used to endorse or promote products derived
   from this software without specific prior written permission.

  * Modified source versions must be plainly marked as such, and must not be
    misrepresented as being the original software.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDER AND CONTRIBUTORS ``AS IS''
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHORS OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

=========================================================================*/

#ifndef _fltkPointSet2D_txx
#define _fltkPointSet2D_txx

#include "fltkPointSet2D.h"



namespace fltk {



//--------------------------------------------------
//
//    Constructor
//
//--------------------------------------------------
template <class TPointSet>
PointSet2D<TPointSet>
::PointSet2D(void)  
{
  m_PointSet = PointSetType::New();
  SetDrawingMode( points );
}




//--------------------------------------------------
//
//    Get PointSet
//
//--------------------------------------------------
template <class TPointSet>
typename PointSet2D<TPointSet>::PointSetConstPointer
PointSet2D<TPointSet>
::GetPointSet(void) const 
{
  return m_PointSet.GetPointer(); 
}



//--------------------------------------------------
//
//    Set PointSet
//
//--------------------------------------------------
template <class TPointSet>
void
PointSet2D<TPointSet>
::SetPointSet( PointSetType * mesh)  
{
  m_PointSet = mesh; 
}




//--------------------------------------------------
//
//    draw Geometric representation
//
//--------------------------------------------------
template <class TPointSet>
void 
PointSet2D<TPointSet>
::DrawGeometry(void)  const
{

    if( !m_PointSet )
    {
      return;
    }

    GLfloat viewport[4];
    glGetFloatv( GL_VIEWPORT, viewport );
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( 0.0, viewport[2], viewport[3], 0.0 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
   
    if( GetDrawingMode() == triangles ) 
    {
    }

    if( GetDrawingMode()== lines ) 
    {
    }

    if( GetDrawingMode()== points ) 
    {

      PointsContainerPointer    meshPoints = m_PointSet->GetPoints();
      PointDataContainerPointer meshData   = m_PointSet->GetPointData();

      if( !meshPoints )
      {
        return;
      }

      typedef typename PointsContainerType::ConstIterator      PointIteratorType;   
      typedef typename PointDataContainerType::ConstIterator   DataIteratorType;   

      glDisable(GL_LIGHTING);
      glDisable(GL_DEPTH_TEST);
      glBegin(GL_POINTS);

      PointIteratorType p = meshPoints->Begin();

      DataIteratorType  d;
      bool pointDataValuesExist = false;
      if( meshData )
        {
        d = meshData->Begin();
        pointDataValuesExist = true;
        }

      while( p != meshPoints->End() )
      {
        
        const PointType point = p.Value();
       
        if( pointDataValuesExist )
        {
        //  if( d.Value() > 0 ) 
        //  { // color in blue
        //    glColor3f( (GLfloat)0.0, (GLfloat)0.0, (GLfloat)1.0 ); 
        //  }
        //  else 
        //  { // color in red
        //   glColor3f( (GLfloat)1.0, (GLfloat)0.0, (GLfloat)0.0 ); 
        //  }
        // ++d;
        }
        
        glVertex2d( point[0], point[1] );
        ++p;
      }

      glEnd();
    }

    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );


}



} // end namespace fltk


#endif
