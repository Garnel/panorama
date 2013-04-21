// File: transformer.hh
// Date: Sun Apr 21 12:27:59 2013 +0800
// Author: Yuxin Wu <ppwwyyxxc@gmail.com>

#pragma once
#include "matcher.hh"
#include "matrix.hh"

class TransFormer {
	private:
		const MatchData& match;
	public:
		TransFormer(const MatchData& m_match):
			match(m_match) {}



};