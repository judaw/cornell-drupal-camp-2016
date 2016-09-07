<?php


function base_preprocess_html(&$variables) {
  $viewport = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      'name' => 'viewport',
      'content' => 'width=device-width',
    )
  );
  drupal_add_html_head($viewport,'viewport');

  // $google = array(
  //   '#type' => 'html_tag',
  //   '#tag' => 'meta',
  //   '#attributes' => array(
  //     'name' => 'google-site-verification',
  //     'content' => 'V2yXePiRxMh4eVfDbDjl7L0Zo9is2YaoZadt9srxr4c',
  //   )
  // );
  // drupal_add_html_head($google,'google');

}
