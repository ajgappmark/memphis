/*
 * Memphis - Cairo Rederer for OSM in C
 * Copyright (C) 2008  <marius.rieder@durchmesser.ch>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

#ifndef RENDER_H
#define RENDER_H

#include <cairo.h>

#include "libmercator.h"
#include "ruleset.h"
#include "osm05.h"

#define LAYERMAX    17
#define LAYERMIN    12

typedef struct _renderInfo renderInfo;
struct _renderInfo {
        coordinates     offset[LAYERMAX-LAYERMIN+1];
        cairo_surface_t *surface[LAYERMAX-LAYERMIN+1];
        cairo_t         *cr[LAYERMAX-LAYERMIN+1];
        short int       minlayer;
        short int       maxlayer;
   };

/*
 * Function Prototype
 */
int renderCairo(cfgRules *ruleset, osmFile *osm);

#endif /* RENDER_H */

/*
 * vim: expandtab shiftwidth=4:
 */