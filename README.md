# tŭsk
A game engine built on top of snõw (https://github.com/underscorediscovery/snow)

[![License](https://img.shields.io/badge/license-MIT-blue.svg?style=flat-square)](https://raw.githubusercontent.com/BlazingMammothGames/tusk/master/LICENSE) [![Build Status](https://img.shields.io/travis/BlazingMammothGames/tusk.svg?style=flat-square)](https://travis-ci.org/BlazingMammothGames/tusk)

## Documentation

tŭsk is my personal game engine using [snõwkit](http://snowkit.org/). It takes on the same role as [luxe](http://luxeengine.com/) but provides a more bare-bones rendering API and has a strict [entity-component-system](https://en.wikipedia.org/wiki/Entity_component_system) (ECS) architecture:

* entities are defined solely by the components that compose them
* components are **data only**
* processors ('systems') operate on entities and components appropriately

Since I think the term 'system' isn't quite right here (it implies more than what they are), in tŭsk I use the term 'processor'—processors process entities by examining and altering their components. I like this approach to ECS instead of the approach used by [luxe](http://luxeengine.com/)  and [Unity](http://unity3d.com/) (where components process themselves) as it provides a clean delineation between data and behaviour and allows more emergent behaviour for essentially free. It also allows defining games as data (provided the processors are defined in code) which enables rapid development and iteration.

The engine is still very much under development. Stay tuned for samples!

### API

Auto-generated up-to-date documentation can be accessed here: http://blazingmammothgames.github.io/tusk/

## Planned Features

- [ ] Entity-Component-Processor Model
- [x] Event System
    - [x] Macro-based automatic event routing for `Game` class children
    - [x] Macro-based automatic event routing for `Processor` class children
- [ ] Enhanced Logging
    - [x] Coloured browser console logs
    - [ ] Coloured terminal logs for supported terminals
    - [ ] Formatted file logs
- [ ] Macro-Based Profiling?
- [ ] Macro-Based Developer Console
- [ ] Flexible Rendering
    - [ ] Material system
- [ ] Asynchronous File Loader
- [ ] Optional (But Commonly Used) Libraries
    - [ ] Post-processing shaders / effects
    - [ ] Tweening
    - [ ] [Tiled](http://www.mapeditor.org/) level loading
    - [ ] 3D model loading
    - [ ] Collision detection
    - [ ] Standard component library
    - [ ] Standard processor library
- [x] Thorough documentation
- [ ] Workable samples
- [ ] Think of more features!

## Contributing

Issues, forks, and pull requests are gladly welcomed!

See https://gist.github.com/FuzzyWuzzie/fab1ce12d2fb84f1f888 for the post-commit hook to automatically update the `VERSION` file and upload docs to gh-pages, and https://gist.github.com/FuzzyWuzzie/8af1e821bdeec3926b9e for the pre-commit hook to automatically run tests before committing. Place the files in the `.git/hooks` repository, named `post-commit` and `pre-commit` respectively.

See https://gist.github.com/chrisjacob/825950 for information on setting up the gh-pages sub repo.