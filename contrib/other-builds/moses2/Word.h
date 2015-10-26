/*
 * Word.h
 *
 *  Created on: 23 Oct 2015
 *      Author: hieu
 */

#pragma once

#include "Factor.h"
#include "TypeDef.h"

class Word {
public:
  Word();
  virtual ~Word();

  size_t hash() const;
  bool operator==(const Word &compare) const;

protected:
  Factor *m_factors[MAX_NUM_FACTORS];
};

