<?php function markwoosley_render_example_add_div($variables) {
  $element = $variables['address'];
  $output = '<div class="render-example-wrapper-div">';
  $output .= $element['#children'];
  $output .= '</div>';
  return $output;
}
?>

<?php

function markwoosley_form_alter(&$form, &$form_state, $form_id) {

  if($form_id=='views_exposed_form')
  {

    $price = 0;
    $price1=50000;
      
        while ($price <= 500000) {

            $price_options[$price] = $price;
            if ($price < 100000) {
                $price = $price + 50000;
            } else {
                $price = $price + 50000;
            }
        }

        while ($price1 <= 1000000) {
            $price_options1[$price1] = $price1;
            if ($price1 < 100000) {
                $price1 = $price1+ 50000;
            } else {
                $price1 = $price1 + 50000;
            }
        }
        
      // unset($price_options[0]);
     //   unset($price_options1[0]);
      
        unset($form['field_price_mls1_value']['#size']);
        $form['field_price_mls1_value']['#type'] = 'select';
        $form['field_price_mls1_value']['#options'] = $price_options;
        $form['field_price_mls1_value']['#default_value'] = "ALL";
        $form['field_price_mls1_value']['#options']['0'] = t('- Any -'); 
         $form['field_price_mls1_value']['#validated'] = 'TRUE';

        unset($form['field_price_mls1_value_1']['#size']);
        $form['field_price_mls1_value_1']['#type'] = 'select';
        $form['field_price_mls1_value_1']['#default_value'] = "ALL";
        $form['field_price_mls1_value_1']['#options'] = $price_options1; 
         $form['field_price_mls1_value_1']['#validated'] = 'TRUE';
         $form['field_price_mls1_value_1']['#empty_option'] = '- Any -';
  }

	  
}
?>