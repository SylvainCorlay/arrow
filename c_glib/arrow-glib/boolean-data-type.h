/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#pragma once

#include <arrow-glib/data-type.h>

G_BEGIN_DECLS

#define GARROW_TYPE_BOOLEAN_DATA_TYPE           \
  (garrow_boolean_data_type_get_type())
#define GARROW_BOOLEAN_DATA_TYPE(obj)                           \
  (G_TYPE_CHECK_INSTANCE_CAST((obj),                            \
                              GARROW_TYPE_BOOLEAN_DATA_TYPE,    \
                              GArrowBooleanDataType))
#define GARROW_BOOLEAN_DATA_TYPE_CLASS(klass)                   \
  (G_TYPE_CHECK_CLASS_CAST((klass),                             \
                           GARROW_TYPE_BOOLEAN_DATA_TYPE,       \
                           GArrowBooleanDataTypeClass))
#define GARROW_IS_BOOLEAN_DATA_TYPE(obj)                        \
  (G_TYPE_CHECK_INSTANCE_TYPE((obj),                            \
                              GARROW_TYPE_BOOLEAN_DATA_TYPE))
#define GARROW_IS_BOOLEAN_DATA_TYPE_CLASS(klass)                \
  (G_TYPE_CHECK_CLASS_TYPE((klass),                             \
                           GARROW_TYPE_BOOLEAN_DATA_TYPE))
#define GARROW_BOOLEAN_DATA_TYPE_GET_CLASS(obj)                 \
  (G_TYPE_INSTANCE_GET_CLASS((obj),                             \
                             GARROW_TYPE_BOOLEAN_DATA_TYPE,     \
                             GArrowBooleanDataTypeClass))

typedef struct _GArrowBooleanDataType         GArrowBooleanDataType;
typedef struct _GArrowBooleanDataTypeClass    GArrowBooleanDataTypeClass;

/**
 * GArrowBooleanDataType:
 *
 * It wraps `arrow::BooleanType`.
 */
struct _GArrowBooleanDataType
{
  /*< private >*/
  GArrowDataType parent_instance;
};

struct _GArrowBooleanDataTypeClass
{
  GArrowDataTypeClass parent_class;
};

GType                  garrow_boolean_data_type_get_type (void) G_GNUC_CONST;
GArrowBooleanDataType *garrow_boolean_data_type_new      (void);

G_END_DECLS
