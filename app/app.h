#pragma once

namespace vsite::oop::v6 
{
		template<typename T>
		struct point {
			T a;
		};

		template<typename T>
		T minimum(T a, T b) {
			if (a < b) {
				return a;
			}
			else {
				return b;
			}
		}



		template<typename T, int I>
		class fixed_array {
		private:
			T arr[I];

		public:
			T operator[] (int a) {
				return arr[a];
			}
			unsigned long long size() {
				return I;
			}
		};

}