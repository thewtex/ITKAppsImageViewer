// generated by Fast Light User Interface Designer (fluid) version 1.00

#include "IViewGUI.h"

inline void IViewGUI::cb_OpenAdd_i(Fl_Menu_*, void*) {
  if (openImageCB != NULL)
	openImageCB();
}
void IViewGUI::cb_OpenAdd(Fl_Menu_* o, void* v) {
  ((IViewGUI*)(o->parent()->user_data()))->cb_OpenAdd_i(o,v);
}

inline void IViewGUI::cb_AddOverlay_i(Fl_Menu_*, void*) {
  if (openOverlayCB != NULL)
	openOverlayCB();
}
void IViewGUI::cb_AddOverlay(Fl_Menu_* o, void* v) {
  ((IViewGUI*)(o->parent()->user_data()))->cb_AddOverlay_i(o,v);
}

inline void IViewGUI::cb_Remove_i(Fl_Menu_*, void*) {
  if (removeCB != NULL)
	removeCB();
}
void IViewGUI::cb_Remove(Fl_Menu_* o, void* v) {
  ((IViewGUI*)(o->parent()->user_data()))->cb_Remove_i(o,v);
}

inline void IViewGUI::cb_Quit_i(Fl_Menu_*, void*) {
  iviewWindow->hide();
}
void IViewGUI::cb_Quit(Fl_Menu_* o, void* v) {
  ((IViewGUI*)(o->parent()->user_data()))->cb_Quit_i(o,v);
}

inline void IViewGUI::cb_Value_i(Fl_Menu_*, void*) {
  imageMode(IMG_VAL);
}
void IViewGUI::cb_Value(Fl_Menu_* o, void* v) {
  ((IViewGUI*)(o->parent()->user_data()))->cb_Value_i(o,v);
}

inline void IViewGUI::cb_Log_i(Fl_Menu_*, void*) {
  imageMode(IMG_LOG);
}
void IViewGUI::cb_Log(Fl_Menu_* o, void* v) {
  ((IViewGUI*)(o->parent()->user_data()))->cb_Log_i(o,v);
}

inline void IViewGUI::cb_X_i(Fl_Menu_*, void*) {
  imageMode(IMG_DX);
}
void IViewGUI::cb_X(Fl_Menu_* o, void* v) {
  ((IViewGUI*)(o->parent()->user_data()))->cb_X_i(o,v);
}

inline void IViewGUI::cb_Y_i(Fl_Menu_*, void*) {
  imageMode(IMG_DY);
}
void IViewGUI::cb_Y(Fl_Menu_* o, void* v) {
  ((IViewGUI*)(o->parent()->user_data()))->cb_Y_i(o,v);
}

inline void IViewGUI::cb_Z_i(Fl_Menu_*, void*) {
  imageMode(IMG_DZ);
}
void IViewGUI::cb_Z(Fl_Menu_* o, void* v) {
  ((IViewGUI*)(o->parent()->user_data()))->cb_Z_i(o,v);
}

inline void IViewGUI::cb_H_i(Fl_Menu_*, void*) {
  imageMode(IMG_H);
}
void IViewGUI::cb_H(Fl_Menu_* o, void* v) {
  ((IViewGUI*)(o->parent()->user_data()))->cb_H_i(o,v);
}

inline void IViewGUI::cb_MIP_i(Fl_Menu_*, void*) {
  imageMode(IMG_MIP);
}
void IViewGUI::cb_MIP(Fl_Menu_* o, void* v) {
  ((IViewGUI*)(o->parent()->user_data()))->cb_MIP_i(o,v);
}

inline void IViewGUI::cb_FlipX_i(Fl_Menu_*, void*) {
  FlipX();
}
void IViewGUI::cb_FlipX(Fl_Menu_* o, void* v) {
  ((IViewGUI*)(o->parent()->user_data()))->cb_FlipX_i(o,v);
}

inline void IViewGUI::cb_FlipY_i(Fl_Menu_*, void*) {
  FlipY();
}
void IViewGUI::cb_FlipY(Fl_Menu_* o, void* v) {
  ((IViewGUI*)(o->parent()->user_data()))->cb_FlipY_i(o,v);
}

inline void IViewGUI::cb_XY_i(Fl_Menu_*, void*) {
  Orientation(2);
}
void IViewGUI::cb_XY(Fl_Menu_* o, void* v) {
  ((IViewGUI*)(o->parent()->user_data()))->cb_XY_i(o,v);
}

inline void IViewGUI::cb_XZ_i(Fl_Menu_*, void*) {
  Orientation(1);
}
void IViewGUI::cb_XZ(Fl_Menu_* o, void* v) {
  ((IViewGUI*)(o->parent()->user_data()))->cb_XZ_i(o,v);
}

inline void IViewGUI::cb_YZ_i(Fl_Menu_*, void*) {
  Orientation(0);
}
void IViewGUI::cb_YZ(Fl_Menu_* o, void* v) {
  ((IViewGUI*)(o->parent()->user_data()))->cb_YZ_i(o,v);
}

Fl_Menu_Item IViewGUI::menu_[] = {
 {"File", 0,  0, 0, 64, 0, 0, 14, 0},
 {"Open/Add", 0x4006f,  (Fl_Callback*)IViewGUI::cb_OpenAdd, 0, 17, 0, 0, 14, 0},
 {"Add Overlay", 0,  (Fl_Callback*)IViewGUI::cb_AddOverlay, 0, 17, 0, 0, 14, 0},
 {"Remove", 0,  (Fl_Callback*)IViewGUI::cb_Remove, 0, 145, 0, 0, 14, 0},
 {"Quit", 0x40071,  (Fl_Callback*)IViewGUI::cb_Quit, 0, 0, 0, 0, 14, 0},
 {0},
 {"Filter", 0,  0, 0, 64, 0, 0, 14, 0},
 {"Value", 0,  (Fl_Callback*)IViewGUI::cb_Value, 0, 0, 0, 0, 14, 0},
 {"Log", 0,  (Fl_Callback*)IViewGUI::cb_Log, 0, 0, 0, 0, 14, 0},
 {"X Deriv", 0,  (Fl_Callback*)IViewGUI::cb_X, 0, 0, 0, 0, 14, 0},
 {"Y Deriv", 0,  (Fl_Callback*)IViewGUI::cb_Y, 0, 0, 0, 0, 14, 0},
 {"Z Deriv", 0,  (Fl_Callback*)IViewGUI::cb_Z, 0, 0, 0, 0, 14, 0},
 {"H", 0,  (Fl_Callback*)IViewGUI::cb_H, 0, 0, 0, 0, 14, 0},
 {"MIP", 0,  (Fl_Callback*)IViewGUI::cb_MIP, 0, 0, 0, 0, 14, 0},
 {0},
 {"Orientation", 0,  0, 0, 64, 0, 0, 14, 0},
 {"FlipX", 0,  (Fl_Callback*)IViewGUI::cb_FlipX, 0, 0, 0, 0, 14, 0},
 {"FlipY", 0,  (Fl_Callback*)IViewGUI::cb_FlipY, 0, 128, 0, 0, 14, 0},
 {"XY", 0,  (Fl_Callback*)IViewGUI::cb_XY, 0, 0, 0, 0, 14, 0},
 {"XZ", 0,  (Fl_Callback*)IViewGUI::cb_XZ, 0, 0, 0, 0, 14, 0},
 {"YZ", 0,  (Fl_Callback*)IViewGUI::cb_YZ, 0, 0, 0, 0, 14, 0},
 {0},
 {0}
};
Fl_Menu_Item* IViewGUI::OpenAdd = IViewGUI::menu_ + 1;
Fl_Menu_Item* IViewGUI::AddOverlay = IViewGUI::menu_ + 2;
Fl_Menu_Item* IViewGUI::Remove = IViewGUI::menu_ + 3;

inline void IViewGUI::cb_sliceNumberSlider_i(Fl_Value_Slider* o, void*) {
  selectSlice((unsigned int)o->value());
}
void IViewGUI::cb_sliceNumberSlider(Fl_Value_Slider* o, void* v) {
  ((IViewGUI*)(o->parent()->user_data()))->cb_sliceNumberSlider_i(o,v);
}

inline void IViewGUI::cb_imageNumberSlider_i(Fl_Value_Slider* o, void*) {
  if (imageNumSliderCB != NULL)
	imageNumSliderCB((int) o->value());
}
void IViewGUI::cb_imageNumberSlider(Fl_Value_Slider* o, void* v) {
  ((IViewGUI*)(o->parent()->user_data()))->cb_imageNumberSlider_i(o,v);
}

inline void IViewGUI::cb_intensityWindowingMinSlider_i(Fl_Value_Slider* o, void*) {
  setIntensityWindowingMin(o->value());
}
void IViewGUI::cb_intensityWindowingMinSlider(Fl_Value_Slider* o, void* v) {
  ((IViewGUI*)(o->parent()->user_data()))->cb_intensityWindowingMinSlider_i(o,v);
}

inline void IViewGUI::cb_intensityWindowingMaxSlider_i(Fl_Value_Slider* o, void*) {
  setIntensityWindowingMax(o->value());
}
void IViewGUI::cb_intensityWindowingMaxSlider(Fl_Value_Slider* o, void* v) {
  ((IViewGUI*)(o->parent()->user_data()))->cb_intensityWindowingMaxSlider_i(o,v);
}

inline void IViewGUI::cb_Zoom_i(Fl_Button*, void*) {
  zoomIn();
}
void IViewGUI::cb_Zoom(Fl_Button* o, void* v) {
  ((IViewGUI*)(o->parent()->user_data()))->cb_Zoom_i(o,v);
}

inline void IViewGUI::cb_Zoom1_i(Fl_Button*, void*) {
  zoomOut();
}
void IViewGUI::cb_Zoom1(Fl_Button* o, void* v) {
  ((IViewGUI*)(o->parent()->user_data()))->cb_Zoom1_i(o,v);
}

inline void IViewGUI::cb_U_i(Fl_Button*, void*) {
  shiftUp();
}
void IViewGUI::cb_U(Fl_Button* o, void* v) {
  ((IViewGUI*)(o->parent()->user_data()))->cb_U_i(o,v);
}

inline void IViewGUI::cb_Reset_i(Fl_Button*, void*) {
  centerWindow();
}
void IViewGUI::cb_Reset(Fl_Button* o, void* v) {
  ((IViewGUI*)(o->parent()->user_data()))->cb_Reset_i(o,v);
}

inline void IViewGUI::cb_R_i(Fl_Button*, void*) {
  shiftRight();
}
void IViewGUI::cb_R(Fl_Button* o, void* v) {
  ((IViewGUI*)(o->parent()->user_data()))->cb_R_i(o,v);
}

inline void IViewGUI::cb_L_i(Fl_Button*, void*) {
  shiftLeft();
}
void IViewGUI::cb_L(Fl_Button* o, void* v) {
  ((IViewGUI*)(o->parent()->user_data()))->cb_L_i(o,v);
}

inline void IViewGUI::cb_D_i(Fl_Button*, void*) {
  shiftDown();
}
void IViewGUI::cb_D(Fl_Button* o, void* v) {
  ((IViewGUI*)(o->parent()->user_data()))->cb_D_i(o,v);
}

IViewGUI::IViewGUI() {
}

IViewGUI::~IViewGUI() {
}

Fl_Window* IViewGUI::createGUI() {
  Fl_Window* w;
  imageNumSliderCB = NULL;
openImageCB = NULL;
openOverlayCB = NULL;
removeCB = NULL;
saveCB = NULL;
  { Fl_Window* o = iviewWindow = new Fl_Window(315, 430, "IView");
    w = o;
    o->labelsize(10);
    o->user_data((void*)(this));
    { Fl_Menu_Bar* o = new Fl_Menu_Bar(0, 0, 275, 25);
      { Fl_Menu_Item* o = &menu_[6];
        addFilterMenuOptions();
      }
      o->menu(menu_);
      addMenuBarOptions();
    }
    { Fl_Value_Slider* o = sliceNumberSlider = new Fl_Value_Slider(290, 25, 20, 280, "Slice");
      o->type(4);
      o->labelsize(10);
      o->step(1);
      o->textsize(9);
      o->callback((Fl_Callback*)cb_sliceNumberSlider);
      o->align(FL_ALIGN_TOP);
    }
    { Fl_Value_Slider* o = imageNumberSlider = new Fl_Value_Slider(5, 335, 80, 20, "Image");
      o->type(5);
      o->labelsize(9);
      o->maximum(0);
      o->step(1);
      o->callback((Fl_Callback*)cb_imageNumberSlider);
      o->hide();
      o->deactivate();
    }
    { Fl_Value_Slider* o = intensityWindowingMinSlider = new Fl_Value_Slider(0, 390, 315, 20);
      o->type(3);
      o->selection_color(32);
      o->labeltype(FL_NO_LABEL);
      o->labelsize(9);
      o->step(1);
      o->value(1);
      o->textsize(9);
      o->callback((Fl_Callback*)cb_intensityWindowingMinSlider);
    }
    { Fl_Value_Slider* o = intensityWindowingMaxSlider = new Fl_Value_Slider(0, 410, 315, 20);
      o->type(3);
      o->color(55);
      o->selection_color(47);
      o->labeltype(FL_NO_LABEL);
      o->labelsize(9);
      o->step(1);
      o->value(1);
      o->textsize(9);
      o->callback((Fl_Callback*)cb_intensityWindowingMaxSlider);
    }
    { Fl_Button* o = new Fl_Button(235, 310, 55, 20, "Zoom In");
      o->labelsize(10);
      o->callback((Fl_Callback*)cb_Zoom);
    }
    { Fl_Button* o = new Fl_Button(235, 365, 55, 20, "Zoom Out");
      o->labelsize(10);
      o->callback((Fl_Callback*)cb_Zoom1);
    }
    { Fl_Button* o = new Fl_Button(180, 310, 35, 35, "U");
      o->box(FL_DIAMOND_UP_BOX);
      o->labelsize(10);
      o->callback((Fl_Callback*)cb_U);
    }
    { Fl_Button* o = new Fl_Button(245, 335, 35, 25, "Reset");
      o->box(FL_ROUND_UP_BOX);
      o->labelsize(10);
      o->callback((Fl_Callback*)cb_Reset);
    }
    { Fl_Button* o = new Fl_Button(200, 330, 35, 35, "R");
      o->box(FL_DIAMOND_UP_BOX);
      o->labelsize(10);
      o->callback((Fl_Callback*)cb_R);
    }
    { Fl_Button* o = new Fl_Button(160, 330, 35, 35, "L");
      o->box(FL_DIAMOND_UP_BOX);
      o->labelsize(10);
      o->callback((Fl_Callback*)cb_L);
    }
    { Fl_Button* o = new Fl_Button(180, 350, 35, 35, "D");
      o->box(FL_DIAMOND_UP_BOX);
      o->labelsize(10);
      o->callback((Fl_Callback*)cb_D);
    }
    { Fl_Output* o = selectedPointDisplay = new Fl_Output(5, 315, 165, 20);
      o->labelsize(12);
      o->textsize(12);
    }
    { Fl_Group* o = glWindowGroup = new Fl_Group(0, 25, 275, 275);
      { Fl_Gl_Window* o = new Fl_Gl_Window(0, 25, 275, 270, "3D Win");
        o->box(FL_EMBOSSED_BOX);
        CreateGLSliceView( glWindowGroup, o );
      }
      o->end();
    }
    o->end();
    o->resizable(o);
  }
  return w;
}

void IViewGUI::addMenuBarOptions(void) {
}

void IViewGUI::addFilterMenuOptions(void) {
}

void IViewGUI::addFileMenuOptions(void) {
}

void IViewGUI::open(void) {
}

void IViewGUI::update(void) {
}

void IViewGUI::show(void) {
}

void IViewGUI::hide(void) {
}

void IViewGUI::setImage(const PhysicalImage<float,3>::Pointer img) {
}

void IViewGUI::imageMode(ImageModeType mode) {
}

void IViewGUI::synchronize(void) {
}

void IViewGUI::shiftUp(void) {
}

void IViewGUI::shiftDown(void) {
}

void IViewGUI::shiftLeft(void) {
}

void IViewGUI::shiftRight(void) {
}

void IViewGUI::selectSlice(unsigned int) {
}

void IViewGUI::setIntensityWindowingMin(float) {
}

void IViewGUI::setIntensityWindowingMax(float) {
}

void IViewGUI::centerWindow(void) {
}

void IViewGUI::zoomIn(void) {
}

void IViewGUI::zoomOut(void) {
}

void IViewGUI::FlipX(void) {
}

void IViewGUI::CreateGLSliceView( Fl_Group *,Fl_Gl_Window * w ) {
  std::cout << "bad create function" << std::endl;
}

void IViewGUI::FlipY(void) {
}

void IViewGUI::Orientation(unsigned int) {
}

void IViewGUI::setOverlay(const PhysicalImage<unsigned char,3>::Pointer img) {
}
