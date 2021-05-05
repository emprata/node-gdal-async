#ifndef __NODE_OGR_LINEARRING_H__
#define __NODE_OGR_LINEARRING_H__

// node
#include <node.h>
#include <node_object_wrap.h>

// nan
#include "../nan-wrapper.h"

// ogr
#include <ogrsf_frmts.h>

#include "gdal_curvebase.hpp"
#include "../collections/linestring_points.hpp"

using namespace v8;
using namespace node;

namespace node_gdal {

class LinearRing : public CurveBase<LinearRing, OGRLinearRing, LineStringPoints> {

    public:
  static Nan::Persistent<FunctionTemplate> constructor;
  using CurveBase<LinearRing, OGRLinearRing, LineStringPoints>::CurveBase;

  static void Initialize(Local<Object> target);
  using CurveBase<LinearRing, OGRLinearRing, LineStringPoints>::New;
  static NAN_METHOD(toString);
  static NAN_METHOD(getArea);
};

} // namespace node_gdal
#endif