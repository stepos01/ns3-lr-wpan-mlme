/* -*-  Mode: C++; c-file-style: "gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2011 The Boeing Company
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *  Author: kwong yin <kwong-sang.yin@boeing.com>
 */

#ifndef LRWPANMACTRAILER_H_
#define LRWPANMACTRAILER_H_

#include "ns3/trailer.h"
#include <stdint.h>

namespace ns3 {

/**
 * The length in octets of the IEEE 802.15.4 MAC FCS field
 */

static const uint16_t LRWPAN_MAC_FCS_LENGTH = 2;

class LrWpanMacTrailer : public Trailer
{
public:
  LrWpanMacTrailer ();
  ~LrWpanMacTrailer ();

  static TypeId GetTypeId (void);
  virtual TypeId GetInstanceTypeId (void) const;
  virtual void Print (std::ostream &os) const;
  virtual uint32_t GetSerializedSize (void) const;
  virtual void Serialize (Buffer::Iterator start) const;
  virtual uint32_t Deserialize (Buffer::Iterator start);
};
} // namespace ns3
#endif /* LRWPANMACTRAILER_H_ */
