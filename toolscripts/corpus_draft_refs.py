"""Types shared by the drafting pipeline's placement step."""


class _Referenced:
    """The split seen through one chunk's relocations, for the linker script.

    The script needs a definition for every symbol a chunk's code can refer to,
    and nothing else: a placed function's address comes from the section the
    script places, and every other reference resolves through an absolute
    symbol. Narrowing it to those references keeps a link over thousands of
    functions as small as the chunk it places.
    """

    def __init__(self, symbols):
        self.symbols = symbols
