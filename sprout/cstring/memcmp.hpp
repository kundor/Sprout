#ifndef SPROUT_CSTRING_MEMCMP_HPP
#define SPROUT_CSTRING_MEMCMP_HPP

#include <cstddef>
#include <sprout/config.hpp>
#include <sprout/iterator/ptr_index_iterator.hpp>
#include <sprout/algorithm/tristate_lexicographical_compare.hpp>

namespace sprout {
	// 7.21.4.1  memcmp �֐�
	inline SPROUT_CONSTEXPR int
	memcmp(void const* s1, void const* s2, std::size_t n) {
		return sprout::tristate_lexicographical_compare(
			sprout::as_iterator(static_cast<unsigned char const*>(s1)), sprout::as_iterator(static_cast<unsigned char const*>(s1), n),
			sprout::as_iterator(static_cast<unsigned char const*>(s2)), sprout::as_iterator(static_cast<unsigned char const*>(s2), n)
			);
	}
}	// namespace sprout

#endif	// #ifndef SPROUT_CSTRING_MEMCMP_HPP
