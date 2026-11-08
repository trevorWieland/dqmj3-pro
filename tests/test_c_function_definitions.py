from pathlib import Path
import sys
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'toolscripts'))
from c_function_definitions import definitions, has_definition


class CFunctionDefinitionTests(unittest.TestCase):
    def test_c11_atomic_parameter_is_a_definition(self):
        self.assertTrue(has_definition('void acquire(_Atomic(int) *value) { use(value); }', 'acquire'))

    def test_nested_callback_parameter_is_a_definition(self):
        source = 'void route(int (*callback)(int (*next)(void))) { callback(0); }'
        self.assertEqual(definitions(source), {'route'})

    def test_declarations_and_calls_do_not_count(self):
        source = 'void acquire(_Atomic(int) *value); void invoke(void) { acquire(0); if (1) { other(); } }'
        self.assertEqual(definitions(source), {'invoke'})

    def test_comments_strings_and_macro_bodies_do_not_count(self):
        source = '/* void hidden(void) {} */ const char *s="void fake(void) {}";\n'
        source += '#define MACRO(x) { \\\n void macro_body(void) {} }\nvoid actual(void) {}'
        self.assertEqual(definitions(source), {'actual'})

    def test_inline_class_methods_and_namespace_functions_count(self):
        source = 'namespace detail { class Owner { void update(int x) { call(x); } }; void clear() {} }'
        self.assertEqual(definitions(source), {'update', 'clear'})

    def test_unclosed_declaration_never_becomes_a_definition(self):
        self.assertFalse(has_definition('void unfinished(_Atomic(int) *value', 'unfinished'))


if __name__ == '__main__':
    unittest.main()
