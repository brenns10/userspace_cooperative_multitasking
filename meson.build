project('userspace-cooperative-multitasking', 'c')

sources = [
  'main.c',
  'scheduler.c',
]

libsc_collections_dep = dependency(
  'sc-collections',
  fallback : ['sc-collections', 'libsc_collections_dep'],
)

executable(
  'main',
  sources,
  dependencies : libsc_collections_dep,
)
