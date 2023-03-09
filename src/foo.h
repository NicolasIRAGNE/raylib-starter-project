/**
 * @file foo.h
 * @author Nicolas IRAGNE (nicoragne@hotmail.fr)
 * @brief Dummy file to test the boilerplate
 * @date 2023-03-09
 *
 * @copyright Copyright niragne (c) 2023
 */

#pragma once

namespace starter_project
{

/**
 * @brief Add two things together. Voluntarily overly generic to test the C++ standard.
 *
 * @param a First thing to add
 * @param b Second thing to add. Crazy, I know.
 * @return auto The sum of the two things.
 */
auto add(const auto& a, const auto& b)
{
    return a + b;
}

void foo();

} // namespace starter_project